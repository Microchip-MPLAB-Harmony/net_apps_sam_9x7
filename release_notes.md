![Microchip logo](https://raw.githubusercontent.com/wiki/Microchip-MPLAB-Harmony/Microchip-MPLAB-Harmony.github.io/images/microchip_logo.png)
![Harmony logo small](https://raw.githubusercontent.com/wiki/Microchip-MPLAB-Harmony/Microchip-MPLAB-Harmony.github.io/images/microchip_mplab_harmony_logo_small.png)

# Microchip MPLAB® Harmony 3 Release Notes

## Network Application Examples for SAM 9X7 Family, v3.2.0

### New Features
- Added demo applications for SAM9X75 Curiosity Board.

### Improvements and Bug Fixes

- Fixed the wolfSSL+FreeRTOS demos to work with secure port 443.
- IPERF throughput improvement.
- Updated demo documentation and included SAM9X75 Curiosity.

### Known Issues
- IPERF throughput reduces when programmed the board with PICkit5/ICD5. Please use sdcard boot method until this issue is fixed.

### Development Tools

- [MPLAB® X IDE, v6.20](https://www.microchip.com/mplab/mplab-x-ide) or later
- [MPLAB® XC32 C/C++ Compiler, v4.45](https://www.microchip.com/mplab/compilers) or later
- [MPLAB® Code Configurator(MCC) Plugin, v5.5.1](https://www.microchip.com/en-us/tools-resources/configure/mplab-code-configurator) or later
- [MPLAB® Harmony v3 net repository, v3.12.2](https://github.com/Microchip-MPLAB-Harmony/net/tree/v3.12.2)
- [MPLAB® Harmony v3 net\_apps\_sam\_9x7 demo apps repository, v3.2.0](https://github.com/Microchip-MPLAB-Harmony/net_apps_sam_9x7/tree/v3.2.0)

### Development Kit Support

This release supports applications for the following development kit.

| Development Kits |
| --- |
| [SAM9X75-DDR3-EB](https://www.microchip.com/en-us/development-tool/EA14J50A) |
| [SAM9X75-Curiosity](release_notes.md) |


## Net Release Notes

- See the [Net 3.12.2 Release Notes](https://github.com/Microchip-MPLAB-Harmony/net/tree/v3.12.2)

---

## Network Application Examples for SAM 9X7 Family, v3.1.0

### New Features
- Support for MAC RX/TX Checksum offload feature
- Support for GMAC RGMII/GMII 10/100 speed.


### Improvements and Bug Fixes

- Fix for GMAC driver critical section access issue.
- ETHPHY driver write function.
- Fix for bind operation in berkeley module.
- Fix for 'IntegerSymbol not found' MCC failure.
- Updated demo documentation.

### Known Issues
- IPERF throughput improvement result will be reported in the next release.


### Development Tools

- [MPLAB® X IDE, v6.15](https://www.microchip.com/mplab/mplab-x-ide) or later
- [MPLAB® XC32 C/C++ Compiler, v4.35](https://www.microchip.com/mplab/compilers) or later
- [MPLAB® Code Configurator(MCC) Plugin, v5.3.7](https://www.microchip.com/en-us/tools-resources/configure/mplab-code-configurator) or later
- [MPLAB® Harmony v3 net repository, v3.11.0](https://github.com/Microchip-MPLAB-Harmony/net/tree/v3.11.0)
- [MPLAB® Harmony v3 net\_apps\_sam\_9x7 demo apps repository, v3.1.0](https://github.com/Microchip-MPLAB-Harmony/net_apps_sam_9x7/tree/v3.1.0)

### Development Kit Support

This release supports applications for the following development kit.

| Development Kits |
| --- |
| [SAM9X75-DDR3-EB](https://www.microchip.com/en-us/development-tool/EA14J50A) |


## Net Release Notes

- See the [Net 3.11.0 Release Notes](https://github.com/Microchip-MPLAB-Harmony/net/tree/v3.11.0)

---

## Harmony 3 Network Application Examples for SAM 9X7 Family  v3.0.0
The applications demonstrate the typical usage of Harmony 3 TCP/IP Stack on a hardware board with SAM9X75 device.
- All applications use MCC for configuration.
- All applications created with TCP/IP Configurator Plugin (beta).

### New Features
- None

### Known Issues
- TCP/IP Configurator plugin fails to open when TCP/IP heap type is TCPIP_STACK_HEAP_TYPE_EXTERNAL_HEAP.
- DBGU0 peripheral receive is not working with standard FTDI cable. The TCP/IP demos use DBGU1 because of this issue.
- PC-Lint reports following MISRA violations:
    - Variable 'tx_frame_state' (line 671) may not have been initialized [MISRA 2012 Rule 9.1, mandatory] in driver/gmac/src/dynamic/drv_gmac_lib_sam9X7.c(716)
    - Symbol 'args' (line 320) not initialized [MISRA 2012 Rule 9.1, mandatory] in system/console/src/sys_console.c(340)

### Development Tools

- [MPLAB® X IDE v6.05](https://www.microchip.com/mplab/mplab-x-ide) or later
- [MPLAB® XC32 C/C++ Compiler v4.20](https://www.microchip.com/mplab/compilers) or later
- MPLAB® Code Configurator (MCC), 5.2.1 or later

### Development Kit Support

This release supports applications for the following development kits

| Development Kits |
| --- |
| SAM9X75-DDR3-EB |


