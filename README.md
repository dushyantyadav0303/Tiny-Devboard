<h1 align="center">
<br> <img width=20% alt="Untitled" src="https://github.com/user-attachments/assets/69eca39f-0230-4277-8f7b-6407eeee1dd5" />
<br> Tiny Devboard <br>
</h1>

<h4 align="center">
A pocket-sized development board built for rapid prototyping, experimentation, and embedded systems development. Its compact USB form factor makes it easy to carry, plug in, and start building wherever inspiration strikes.
</h4>

<div align="center">

![License](https://img.shields.io/badge/License-MIT-blue.svg)
![Project](https://img.shields.io/badge/Project-Hardware-yellow.svg)
![Series](https://img.shields.io/badge/Series-Tiny-red.svg)
![Devlog](https://img.shields.io/badge/Devlog-_-blue)

</div>
<p align="center">
  <a href="#about-the-project">About</a> •
  <a href="#repository-structure">Structure</a> •
  <a href="#schematic">Schematic</a> •
  <a href="#pcb">PCB</a> •
  <a href="#cad">CAD</a> •
  <a href="#Render">Render</a> •
  <a href="#bill-of-materials">BOM</a> •
  <a href="#license">License</a> •
  <a href="#credits">Credits</a>
</p>  
<p
  align="center">
  <a href="GETTING_STARTED.md"> <img src="https://img.shields.io/badge/Get%20Started-Open-green?style=for-the-badge.svg" /> </a>

</p>

<br>
<br>
<p align=center>
  <img width=80% src="assets/607538089-f321978d-a0c7-42ad-8e95-90d197f539ce.gif" />
</p>


## About the Project
**Tiny Devboard** is a pocket-sized development board built for rapid prototyping, experimentation, and embedded systems development. Its compact USB form factor makes it easy to carry, plug in, and start building wherever inspiration strikes.

### Specifications

| Item | Details |
|--------|---------|
| MCU | ATSAMD21E18A-AU |
| Wireless | ESP-12S |
| USB | Type-A |
| Logic Voltage | 3.3V |
| RGB LED | APA102-2020 |
| Programming | UF2 / SWD |

### Features

- **ATSAMD21E18A-AU (32-bit ARM Cortex-M0+)**
- **ESP-12S (ESP8266 Wi-Fi)**
- **USB Type-A Port**
- **RGB Status LED**
- **Compact Form Factor**

## Repository Structure

- `src/PCB/` — EasyEDA project sources
- `src/cad/` — mechanical CAD sources
- `production/pcb/` — PCB fabrication files (Gerbers, BOM, Pick & Place)
- `production/cad/` — 3D-printing files (.3mf)
- `Render/` for Render Sources
- `GETTING_STARTED/` — Setup guides, firmware installation, and board bring-up documentation
- `Journal/` — DevLogs With Timestamp
- `Firmware/` — Demo firmware, utilities, and firmware releases for Tiny DevBoard


## Schematic
Designed in ![Easyeda](https://img.shields.io/badge/easyeda-%2300578F.svg?style=for-the-badge&logo=easyeda&logoColor=white) 

Source : `src/PCB/Schematic/`
<img width=90%  alt="SCH_Schematic1_1-P1_2026-06-14" src="https://github.com/user-attachments/assets/046ea1c7-2858-4bc8-8734-da8fa1e9b404" />

## PCB 
Source : `src/PCB/Board/`
<div align="center">

| Front PCB | Back PCB |
|-----------|----------|
| <img src="https://github.com/user-attachments/assets/e3adce7b-7b6d-4565-8e5b-c559a74f469d" width="400"> | <img src="https://github.com/user-attachments/assets/6b76697b-ef22-403a-bd54-40974c6e1211" width="400"> |
| <img src="https://github.com/user-attachments/assets/ae07806d-b671-4f46-b52e-571adf436200" width="400"> | <img src="https://github.com/user-attachments/assets/d890ca15-a733-4fff-b6a4-89498c2d2279" width="400"> |

</div>

## Cad
- source: `production/cad/`
<div align="center">
  <table>
    <tr>
      <td valign="bottom"><img width=100% alt="image" src="https://github.com/user-attachments/assets/de35c7ac-af3e-442f-b737-ed8cbb5fba5f" />
</td>
      <td valign="bottom"><img width=100% alt="I" src="https://github.com/user-attachments/assets/20f98c66-edf5-4abb-9771-9a19b16c05aa" />
  </table>
</div>

## Render 
- source: `Render/`
<div align="center">
  <table>
    <tr>
      <td valign="bottom"><img width=100% alt="image" src="https://github.com/user-attachments/assets/29f859c8-283f-40e5-84a0-65510b93ddb4" />
</td>
      <td valign="bottom"><img width=100% alt="Image" src="https://cdn.hackclub.com/019e9d94-b583-7b67-a21d-aa6813a41b2f/0000-0055.gif" />
  </table>
</div>
