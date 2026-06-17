# Tiny DevBoard Firmware Docs

## About

**Tiny DevBoard Firmware** is a demo firmware for the Tiny DevBoard development board Testing, Diagnosing and Check there Capability.
## Workflow 
1. Serial print Banner
2. Initialize GPIO/UART/RGB
3. Check Module Connections
4. Display Hardware Spec
5. Run Self-Test
``` 
Loop
 ├── RGB Animation v
 ├── Status Report
 └── WiFi Scan
 ```
## Quick Start

- Download [Arduino IDE](https://www.arduino.cc/en/software)
- Go to Tools → Board Manager
- Search for "SAMD"
- Install Arduino SAMD Boards by Arduino
- Install Required Libraries
- Go to Sketch → Include Library → Manage Libraries
- Search and install: Adafruit DotStar by Adafruit
- Tools Menu:
``` 
├── Board: Adafruit Trinket M0
├── Serial Monitor Baud: 115200
└── COM Port: 
```
- Open Demo_Firmware.ino file in Arduino IDE
- Click Upload 
- Open Tools → Serial Monitor At baudRate 115200  To See Output

## Expected Output
```
=============================================
                 Tiny Devboard
=============================================
 Firmware Version : v1.0.0
 Build Date       : 10 Jun 2026
 Author           : dushyant.yadav0303

Hola Hackers! It's me tiny devboard
Tiny DevBoard is starting up...

- Starting rgb animation
- Checking USB connection

Resetting Wifi module ...
 - Wifi module detected Successfully


=======================================
System Information
=======================================
Board Name    : Tiny Devboard
MCU           : ATSAMD21E18A-AU
CPU Frequency : 48 MHz
Flash Memory  : 256 KB
SRAM Memory   : 32 KB

 - Wifi module detected Successfully

=========================================
 Board ready to Rock!
=========================================
```


##  Code Structure
```
TinyDevBoard_Firmware.ino
├── Libraries
├── Pin Definitions & Constants
├── Global Variables
├── Function Prototypes
├── setup()
├── loop()
├── Initialization Functions
│   ├── initializeSerial()
│   ├── initializeHardware()
│   ├── initializeRGB()
│   └── initializeESP()
├── Display Functions
│   ├── displayStartupBanner()
│   ├── displaySystemInfo()
│   └── displayStatusReport()
├── RGB Animation Functions
│   ├── updateRGBAnimation()
│   ├── rainbowCycle()
│   ├── breathingAnimation()
│   └── pulseAnimation()
├── ESP Communication Functions
│   ├── communicateWithESP()
│   ├── performWifiScan()
│   ├── sendESPCommand()
│   └── readESPResponse()
└── Utility Functions
    └── getUptimeSeconds()
```