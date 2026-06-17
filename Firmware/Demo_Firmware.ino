/*
* ========================================
* TINY DEVBOARD - Demo FIRMWARE 
* ========================================
*
* Simple , easy-to-understand firmware for Tiny DevBoard
* Microcontroller : ATSAMD21E18A-AU
* Wifi Module : ESP-12S  via AT Command
*
* Author : dushyant.yadav0303
* Build Date : 15 Jun 2026
*=========================================
*/

#include <Adafruit_DotStar.h>
#include <SPI.h>

// pins

#define RGB_DATA_PIN    PA00
#define RGB_CLOCK_PIN   PA01
#define ESP_RX_PIN      PA06
#define ESP_TX_PIN      PA07
#define ESP_RESET_PIN   PA17
#define STATUS_LED_PIN  PA10
#define SERIAL_BAUD_RATE     115200
#define ESP_BAUD_RATE        115200
#define RGB_PIXELS           1
#define STATUS_INTERVAL      10000  
#define WIFI_SCAN_INTERVAL   30000

adafruit_DotStar strip( RGB_PIXELS , RGB_DATA_PIN, RGB_CLOCK_PIN, DOTSTAR_BRG ) ;
Uart ESP_SERIAL(&sercom1, ESP_RX_PIN, ESP_TX_PIN , SERCOM_RX_PAD_3, UART_TX_PAD_0 );

unsigned long startTime = 0 ;
unsigned long lastStatus = 0 ;
unsigned long lastWifiScan = 0 ;
unsigned long animationTimer = 0 ;

uint8_t espDetected = 0 ;
uint8_t currentColor = 0 ;

char wifiNetworks [5][50] ;
int8_t wifiRSSI[5] ;
uint8_t networkCount = 0 ;

uint32_t colors[] = {0xFF0000, 0x00FF00, 0x0000FF, 0xFFFFFF, 0xFF00FF};
uint8_t colorCount = 5 ;

void setup(){
    Serial.begin(SERIAL_BAUD_RATE);
    pinMode(STATUS_LED_PIN, OUTPUT);
    pinMode(ESP_RESET_PIN, OUTPUT);
    delay (1000);
    strip.begin();
    strip.show();
    startTime = millis();
    displayStartup();
    initializeESP();
    displaySystemInfo();
}

void loop (){
    unsigned long currentTime = millis ();
    updateRGBAnimation ( currentTime ) ;
    if (currentTime - lastWifiScan >= WIFI_SCAN_INTERVAL) {
     lastWifiScan = currentTime;
     scanWifiNetworks();
    }
    if ( currentTime - lastStatus >= STATUS_INTERVAL) {
        lastStatus = currentTime ;
        displayStatus(currentTime);
    }

    digitalWrite(STATUS_LED_PIN,(currentTime / 1000) %2 == 0 ? HIGH : LOW );
    delay(50);
}
void displayStartup(){
     Serial.println();
     Serial.println("=============================================");
     Serial.println("                 Tiny Devboard               ");
     Serial.println("=============================================");
     Serial.println(" Firmware Version : v1.0.0");
     Serial.println(" Build Date       : 10 Jun 2026 ");
     Serial.println(" Author           : dushyant.yadav0303 ");
     Serial.println();
     Serial.println("Hola Hackers! It's me tiny devboard ");
     Serial.println("Tiny DevBoard is starting up...");
     Serial.println();
     Serial.println("- Starting rgb animation");
     strip.setPixelColor(0, 0xFF0000);
     strip.setBrightness(255);
     strip.show();
     delay(300);

     Serial.println("- Checking USB connection ");
     delay(300);
}  

void displaySystemInfo(){
    Serial.println();
    Serial.println("=======================================");
    Serial.println("System Information");
    Serial.println("=======================================");
    Serial.println("Board Name    : Tiny Devboard");
    Serial.println("MCU           : ATSAMD21E18A-AU");
    Serial.println("CPU Frequency : 48 MHz");
    Serial.println("Flash Memory  : 256  KB ");
    Serial.println("SRAM Memory   : 32 KB");
    Serial.println();

    if(espDetected){
        Serial.println(" - Wifi module detected Successfully");
    } else {
        Serial.println(" - Wifi module not detected");
        Serial.println("Check Getting Start - Troubleshoot section");
    }

    Serial.println();
    Serial.println("=========================================");
    Serial.println(" Board ready to Rock!");
    Serial.println("=========================================");
    Serial.println();
}

void displayStatus(unsigned long currentTime){
    unsigned long uptime = (currentTime - startTime) / 1000;
    Serial.println();
    Serial.println("==========================================");
    Serial.println("Board Status Report");
    Serial.println("==========================================");
    Serial.println(" Uptime              :  ");
    Serial.println(uptime);
    Serial.println("seconds");
    Serial.println("RGB Animation        :  ");
    Serial.println("Running");
    Serial.println(" ESP Communication   :  ");
    if (espDetected){
        Serial.println("OK");
    } else {
        Serial.println("Not Available");
    }
    Serial.println("=========================================");
    Serial.println();
}

void updateRGBAnimation(unsigned long currentTime){
    static unsigned long lastColorChange = 0;
    if (currentTime - lastColorChange >= 3000){
        lastColorChange = currentTime;
        currentColor++;
        if (currentColor >= colorCount){
            currentColor = 0 ;
        }
        uint32_t color = colors[currentColor];
        strip.setPixelColor (0, color);
        strip.setBrightness(255);
        strip.show();
    }
}

void initializeESP(){ 
    Serial.println("Resetting Wifi module ...");
    pinPeripheral(ESP_RX_PIN, PIO_SERCOM);
    pinPeripheral(ESP_TX_PIN, PIO_SERCOM);
    ESP_SERIAL.begin(ESP_BAUD_RATE);
    digitalWrite(ESP_RESET_PIN, LOW);
    delay(100);
    digitalWrite(ESP_RESET_PIN, HIGH);
    delay(500);

    while  (ESP_SERIAL.available()){
        ESP_SERIAL.read();
    }

    delay(500);
    sendCommand("AT");
    String response = readResponse(2000);

    if (response.indexOf("OK") != -1){
        espDetected = 1;
        Serial.println(" - Wifi module detected Successfully");
    } else {
        espDetected = 0 ;
        Serial.println(" - Wifi module Not detected");
    }
        Serial.println();
}

void scanWifiNetworks(){
    if (!espDetected){
        return;
    }
    Serial.println("- Wifi scan completed :");

    sendCommand("AT+CWMODE=1")
    readResponse(500);

    sendCommand("AT+CWLAP");
    String response = readResponse(3000);

    parseWifiResponse(response);

    if (networkCount > 0 ){
        for (uint8_t i = 0; i < networkCount; i++){
        Serial.print(" ");
        Serial.print(i + 1);
        Serial.print(". ");
        Serial.print(wifiNetworks[i]);
        Serial.print("  (");
        Serial.print(wifiRSSI[i]);
        Serial.println(" dBm)");
        }
    }
            Serial.println();
}

void parseWifiResponse(String response){
     networkCount = 0 ;

     int startPos = 0 ;
     while (networkCount < 5) {

        int cwlapPos = response.indexOf("+CWLAP:", startPos);
        if (cwlapPos == -1 ) break;

        int ssidStart = response.indexOf("\"" , cwlapPos);
        if (ssidStart == -1 ) break;
        ssidStart++;

        int ssidEnd = response.indexOf("\"" , ssidStart);
        if (ssidEnd == -1 ) break;

        String ssid = response.substring(ssidStart, ssidEnd);
        ssid.toCharArray(wifiNetworks[networkCount], 50);

        int rssiStart = response.indexOf("," , ssidEnd);
        if (rssiStart == -1 ) break;
        rssiStart++;

        int rssiEnd = response.indexOf(",", rssiStart);
        if (rssiEnd == -1 ) {
            rssiEnd = response.indexOf(")", rssiStart);
        }
        if (rssiEnd == -1) break;

        String rssiStr = response.substring(rssiStart, rssiEnd);
        wifiRSSI[networkCount]= rssiStr.toInt();

        networkCount++;
        startPos = rssiEnd;
     }
}

void sendCommand(const char*command){
    while (ESP_SERIAL.available()) {
         ESP_SERIAL.read();
    }
    ESP_SERIAL.print(command);
    ESP_SERIAL.print("\r\n");
    ESP_SERIAL.flush();
    delay (50);
}

String readResponse(unsigned long timeout) {
    String response = "";
    unsigned long startTime = millis();

    while (millis() - startTime < timeout) {
        while (ESP_SERIAL.available()) {
            char c = ESP_SERIAL.read();
            response += c;
            startTime = millis();
        }
    }

    return response;
}
 
void pinPeripheral (uint32_t ulPin, EPioType ulPeripheral) {
    PORT ->
    Group[ g_APinDescription[ulPin].ulPort].PINCFG[g_APinDescription[ulPin].ulPin].bit.PMUXEN = 1;
    PORT ->
    Group[g_APinDescription[ulPin].ulPort].PMUX[g_APinDescription[ulPin].ulPin >> 1].reg =
    (PORT ->
    Group[g_APinDescription[ulPin].ulPort].PMUX[g_APinDescription[ulPin].ulPin >> 1].reg &
    (0xF << ( 4* (g_APinDescription[ulPin].ulPin & 0x01)))) |
    (ulPeripheral << (4 * (g_APinDescription[ulPin].ulPin & 0x01 )));
}

 void SERCOM1_Handler(){
    ESP_SERIAL.IrqHandler();
}

/*
It is Your Duty to begin creating your own Amazing Project using the Tiny Dev-Board While Taking Firmware as Reference,
And explore & learn more about the board's capabilities.
 Happy hacking!
If you're experiencing an issue that is not covered in this guide, please open a GitHub Issue.
*/