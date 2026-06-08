# Getting Started

## Table of Contents

* [Prerequisites](#prerequisites)

  * [Hardware Requirements](#hardware-requirements)
  * [Software Requirements](#software-requirements)
* [Board Connections](#board-connections)

  * [USB](#usb)
  * [SWD](#swd)
  * [UART](#uart)
* [ATSAMD21 Setup](#atsamd21-setup)

  * [Install Bootloader](#install-bootloader)
  * [Verify Bootloader](#verify-bootloader)
  * [Upload Firmware](#upload-firmware)
* [ESP-12S Setup](#ESP-12S-Setup)

  * [Check Existing Firmware](#check-existing-firmware)
  * [Flash Firmware](#flash-firmware)
* [First Power-On Test](#first-power-on-test)
* [Troubleshooting](#troubleshooting)
* [Resources](#resources)



## Prerequisites
### Hardware Requirements
- [Usb to TTL Converter](https://github.com/dushyantyadav0303/USB-TO-TTL-Convertor)
- [Usb to SWD Converter](https://robocraze.com/products/st-link-v2-v2-1-usb-c-programmer-and-debugger-for-stm32-microcontrollers-7semi)
- [Jumper Wire](https://robocraze.com/products/jumper-wire-set-m2m-m2f-f2f-40-pcs-each)

### Software Requirements

- [Espressif flash download tool](https://docs.espressif.com/projects/esp-test-tools/en/latest/esp32/production_stage/tools/flash_download_tool.html)
- [UartAssist](https://www.nitwo.com/en/download/UartAssist.html)

## Board Connections

### USB
Connect Devboard Usb Port Directly to your Pc
<img width="80%" alt="0000-0052 (1)" src="https://github.com/user-attachments/assets/8231d235-bbe5-41cd-8905-ecb928ab9311" />


### SWD


### UART
- Purpose
- TX
- RX
- GND

-----------
-----
------


## ATSAMD21 Setup

### Install Bootloader
1. Connect USB to SWD Converter To DevBoard [Given Above](#swd)
2. Download the [UF2 bootloader](https://downloads.circuitpython.org/bin/trinket_m0/en_US/adafruit-circuitpython-trinket_m0-en_US-10.3.0-alpha.2.uf2)
3. Flash the Bootloader 


### Verify Bootloader
1. Connect the Board via [USB](#usb)
2. Quickly press the RESET button twice 
<img width=40% alt="image" src="https://github.com/user-attachments/assets/eb2d3f6d-9f3f-4946-8f52-bf036eba3d71" /> 

3. Devboard detected in the PC As a external Storage 
<img width="800" height="301" alt="Recording2026-06-06223643-ezgif com-speed" src="https://github.com/user-attachments/assets/69c8cde0-e02c-4d08-941e-243680734509" />


### Upload Firmware
1. Connect the Board via [USB](#usb)

2. Quickly press the RESET button twice
3. 
4. Prepare your firmware in .uf2

5. Paste your firmware in Detected External storage 
<img width="818" height="388" alt="20260606-1743-07 7803021" src="https://github.com/user-attachments/assets/23f23f05-d857-41ca-997a-91e4c60d457d" />


## ESP-12S-Setup

### Check Existing Firmware

1. Connect USB to TTL Converter To DevBoard [Given Above](#UART)
2. Download Serial Port Terminal ex. [UartAssist ](https://www.nitwo.com/en/download/UartAssist.html)
3. Configure it According to this 
<img width="152" height="354" alt="image" src="https://github.com/user-attachments/assets/6909818b-8e8a-48d1-9e14-58b69ec71e0e" />

4. Send AT command 
<img width="400" height="461" alt="Recording 2026-06-07 035755 - Trim" src="https://github.com/user-attachments/assets/d6aead8e-e24d-442f-a11d-7670309c13b5" />

If you Response Ok Then it is Perfect 
If not then Follow next [Flash Firmware](#flash-firmware)


### Flash Firmware

1. Download [Firmware](https://espressif-docs.readthedocs-hosted.com/projects/esp-at/en/release-v2.3.0.0_esp8266/AT_Binary_Lists/ESP8266_AT_binaries.html) 
2. Download [Espressif flash download tool](https://docs.espressif.com/projects/esp-test-tools/en/latest/esp32/production_stage/tools/flash_download_tool.html) 
3. Connect USB to TTL Converter To DevBoard [Given Above](#UART)
4. Open Flashing tool 
- Select Esp8266 & Developer mode 
<img width="219" height="212" alt="image" src="https://github.com/user-attachments/assets/d996457b-faa6-42c9-8990-a25f0b22f7d8" />

- Select the firmware with hex code 0x0 & And select the Correct com Port
<img width="427" height="689" alt="image" src="https://github.com/user-attachments/assets/74f4076c-3682-4ec0-8e16-a0a0cffa4baf" />

5. Esp-12s into Flash mode
<img width="400" height="225" alt="0608" src="https://github.com/user-attachments/assets/a22c482b-37bf-4a4b-aad6-b6e6c358fe46" />

- Press and hold the BOOT button
- Press and release the RST button
- Release the BOOT button
Then Click Start 

