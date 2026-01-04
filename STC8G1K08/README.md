# What is STC8G1K08?


```Features```

- 8051-compatible MCU
- 8 KB Flash
- 1 KB RAM
- Internal oscillator (no crystal needed)
- UART bootloader built-in
- Very low cost & low power
- Package: SOP-8 / DIP-8

```Hardware```
- STC8G1K08
- USB-to-TTL adapter (CH340 / CP2102 / FT232)
- Jumper wires
- 5V or 3.3V supply (both supported)


#### connection

| STC8G1K08 Pin  | USB-TTL   |
| -------------- | --------- |
| **P3.0 (RXD)** | TX        |
| **P3.1 (TXD)** | RX        |
| **VCC**        | 5V / 3.3V |
| **GND**        | GND       |

#### Download Programming Software
- ***[STC-ISP V6.x](https://www.stcmicro.com/rjxz.html)***
- ***[SDCC](https://sdcc.sourceforge.net/)***

#### create a HEX file for STC8G1K08

1. create a folder, Make a file called: **main.c**
2. Compile using SDCC command 
open in command promt

```bash
  sdcc main.c
```

```
main.asm
main.lk
main.mem
main.rel
main.rst
main.sym
main.ihx     <--- important file
```
3. Convert IHX → HEX
```packihx main.ihx > main.hex```

4. ```main.hex    <--- PROGRAM THIS INTO STC8G1K08```
5. Load HEX into STC-ISP (stc-isp only accepts HEX)
    
    * Open STC-ISP.exe
    * Select MCU: STC8G1K08
    * select COM port
    * select port in ```CDC/HID UARTHelper``` Tab
    * Click Open File → choose main.hex
    * Click Download
    * NOW press RESET / power-cycle the board (connect Gnd, toggle vcc)
    * Flashing will start automatically
    

## Reference

https://youtu.be/ROm7Et3gtnQ?si=m9iFk5dpTtOU1jdo
