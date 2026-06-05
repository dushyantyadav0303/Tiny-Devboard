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
* [ESP-12S Setup](#esp-12s-setup)

  * [Check Existing Firmware](#check-existing-firmware)
  * [Flash Firmware](#flash-firmware)
  * [Verify Firmware](#verify-firmware)
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












## Board Overview
<img width="1111" height="702" alt="image" src="https://github.com/user-attachments/assets/f869443b-6fcc-4dc3-8293-ab5b9ad08c34" />

### In this DevBoard we have 2 MCU

- Esp-12s: As a Wifi Module
- Atsamd21e18A-AU: Main processing unit

### Board Interfaces
- USB
- SWD
- UART
- GPIO

