<h1 align="center">
<br> <img width=20% alt="Untitled" src="https://github.com/user-attachments/assets/69eca39f-0230-4277-8f7b-6407eeee1dd5" />
<br> Tiny Devboard <br>
</h1>
<div align="center">
  
[![Hack Club macondo](https://img.shields.io/badge/Hack%20Club-🦋Macondo-FFC800?style=for-the-badge&logo=hack-club&logoColor=red.svg)](https://macondo.hackclub.com)
</div>


<h4 align="center">
A pocket-sized development board built for rapid prototyping, experimentation, and embedded systems development. Its compact USB form factor makes it easy to carry, plug in, and start building wherever inspiration strikes.
</h4>

<div align="center">

![License](https://img.shields.io/badge/License-MIT-blue.svg)
![Project](https://img.shields.io/badge/Project-Hardware-yellow.svg)
![Series](https://img.shields.io/badge/Series-Tiny-red.svg)

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
[![EasyEDA](https://img.shields.io/badge/Designed%20in-EasyEDA-00578F?style=for-the-badge&logo=easyeda&logoColor=white)](https://easyeda.com)

Source : `src/PCB/Sch`
<img width=90%  alt="SCH_Schematic1_1-P1_2026-06-14" src="https://github.com/user-attachments/assets/046ea1c7-2858-4bc8-8734-da8fa1e9b404" />

## PCB 
Source : `src/PCB/Pcb`
<div align="center">

| Front PCB | Back PCB |
|-----------|----------|
| <img src="https://github.com/user-attachments/assets/e3adce7b-7b6d-4565-8e5b-c559a74f469d" width="400"> | <img src="https://github.com/user-attachments/assets/6b76697b-ef22-403a-bd54-40974c6e1211" width="400"> |
| <img src="https://github.com/user-attachments/assets/ae07806d-b671-4f46-b52e-571adf436200" width="400"> | <img src="https://github.com/user-attachments/assets/d890ca15-a733-4fff-b6a4-89498c2d2279" width="400"> |

</div>

## CAD
[![Fusion 360](https://img.shields.io/badge/CAD%20in-Fusion%20360-orange?style=for-the-badge&logo=autodesk&logoColor=white)](https://www.autodesk.com/products/fusion-360)


A Encloser Case for Tiny Devboard. Case consists of 6 interlocking Hook that are secured them, allowing the enclosure to be assembled without screws or Glue makes it easy assembly.

- source: `src/cad/`
<div align="center">
<table>
<tr>
<td valign="bottom"><img width=100% alt="image" src="https://github.com/user-attachments/assets/de35c7ac-af3e-442f-b737-ed8cbb5fba5f" />
</td>
<td valign="bottom"><img width=100% alt="I" src="https://github.com/user-attachments/assets/20f98c66-edf5-4abb-9771-9a19b16c05aa" />
</table>
</div>

### 3D-printable Production files are available in:
- source: `production/cad/`

## Render 
[![Blender](https://img.shields.io/badge/Rendered%20in-Blender-F5792A?style=for-the-badge&logo=blender&logoColor=white)](https://www.blender.org)

- source: `Render/`
<div align="center">
<table>
<tr>
<td valign="bottom"><img width=350px alt="image" src="assets/607538089-f321978d-a0c7-42ad-8e95-90d197f539ce.gif" />
</td>
<td valign="bottom"><img width=350px alt="Image" src="https://github.com/user-attachments/assets/b612524b-9a15-463d-83fe-6ad1b9554bb5" />
</table>
</div>

## Bill of Materials

Source: `production/pcb/bom.xlsx`

|No.|Quantity|Comment             |Designator         |Footprint                                |Value|Price (exc Taxes)  |
|---|--------|--------------------|-------------------|-----------------------------------------|-----|-------------------|
|1  |5       |10K                 |R1,R2,R3,R4,R6     |R0805                                    |10K  |0.07$               |
|2  |1       |1.5k                |R7                 |R0805                                    |1.5k |0.01$               |
|3  |1       |10k                 |R5                 |R0805                                    |10k  |0.01$               |
|4  |2       |0                   |R8,R9              |R0603                                    |0    |0.02$               |
|5  |2       |0.1uF               |C5,C7              |C0805                                    |0.1uF|0.01$               |
|6  |1       |1uf                 |C1                 |C0603                                    |1uf  |0.01$               |
|7  |3       |10uF                |C3,C4,C6           |C0805                                    |10uF |0.04$               |
|8  |1       |100nF               |C8                 |C0805                                    |100nF|0.01$               |
|9  |2       |LED_0805-R          |LED3,LED4          |L0805                                    |     |0.02$               |
|10 |1       |AM90                |USB1               |USB-AM-TH_AM90                           |     |0.25$               |
|11 |1       |APA102-2020 SuperLED|U2                 |LED-SMD_6P-L2.0-W2.0-APA102-2020-SUPERLED|     |0.16$               |
|12 |1       |ATSAMD21E18A-AU     |U1                 |TQFP-32_L7.0-W7.0-P0.80-LS9.0-BL         |     |1.4$                |
|13 |1       |ESP-12s             |U4                 |WIRELM-SMD_ESP-12S                       |     |1.7$                |
|14 |1       |HT7833              |U3                 |SOT-89_L4.5-W2.5-P1.50-LS4.2-BR          |     |0.16$               |
|15 |1       |ZX-PZ1.0-1-6PZZ     |Gn +3 Rx Tx Clk Dio|HDR-TH_6P-P1.00-V-F                      |     |0.01$               |
|16 |3       |TSA010A2518A        |BOOT,SW1,SW2       |SW-SMD_L4.0-W3.0-LS5.0                   |     |0.1$                |
|17 |1       |PCB                 |                   |                                         |     |2$ From Jlcpcb      |



## License

Licensed under MIT — you can use this commercially, modify, and distribute 
with proper attribution. See [LICENSE](LICENSE) file.

## Contributing

Contributions, improvements, and remixes are welcome! Please read the [CONTRIBUTING.md](CONTRIBUTING.md) guide to get started.


## Credits
<div align="center">
  
[![Hack Club macondo](https://img.shields.io/badge/Hack%20Club-🦋Macondo-FFC800?style=for-the-badge&logo=hack-club&logoColor=red)](https://macondo.hackclub.com)
[![EasyEDA](https://img.shields.io/badge/Designed%20in-EasyEDA-00578F?style=for-the-badge&logo=easyeda&logoColor=white)](https://easyeda.com)
[![Fusion 360](https://img.shields.io/badge/CAD%20in-Fusion%20360-orange?style=for-the-badge&logo=autodesk&logoColor=white)](https://www.autodesk.com/products/fusion-360)
[![Blender](https://img.shields.io/badge/Rendered%20in-Blender-F5792A?style=for-the-badge&logo=blender&logoColor=white)](https://www.blender.org) 
</div>

This project was created during a [Hack Club](https://hackclub.com) event [Macondo](https://macondo.hackclub.com).
- **[EasyEDA](https://easyeda.com)** - PCB design and schematic capture
- **[Fusion 360](https://www.autodesk.com/products/fusion-360)** - Cad Designing
- **[Blender](https://www.blender.org)** - Render
- **[@NotARoomba](https://github.com/notaroomba) & [@Gabouin](https://github.com/Gabouin)** - Readme template
