# STM8S003F3P6 Programming

```Hardware```
- STM8S003F3P6 board
- ST-Link V2

#### connection

| ST-LINK Pin   | STM8 Pin                |
| ------------- | ----------------------- |
| **SWIM**      | **SWIM** (Pin 18)       |
| **GND**       | GND                     |
| **3.3V / 5V** | VCC (board supports 5V) |
| **RST**       | NRST (Pin 4 of chip)    |

#### Download Programming Software
- ***[Arduino IDE 1.8.19](https://downloads.arduino.cc/arduino-1.8.19-windows.exe)***
- ***Install Sduino (Arduino Core for STM8)***
Add URL : Open File → Preferences → Additional Boards Manager URLs and add
https://github.com/tenbaht/sduino/raw/master/package_sduino_stm8_index.json


#### Install Board
1. Boards Manager → search sduino → install

2. **Arduino IDE Settings**
    * Board: Sduino STM8S Value Line
    * Processor: STM8S003F3
    * Programmer: ST-Link V2
