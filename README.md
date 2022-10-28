A hello blink c program for the attiny85, done in an effort to get to terms with microcontrollers out of rust. Hence when I need to debug signals I can check using this device rather than experimenting and learning completely in rust


**Requirements**
1. avr-gcc
2. avrdude
3. UsbAsp Programmer for AVR

These tools are used to compile and upload code to the attiny85

Steps

1. Compile with the command   `avr-gcc -Os -mmcu=attiny85 main.c`
2. Convert executable to intel hex with `avr-objcopy -O ihex -j .text -j .data a.out a.hex`
3. Uplooad to attiny using USBAsp `avrdude -B4 -p t85 -c usbasp -U flash:w:a.hex:i`

Enjoy a blinking led as below ![Attiny85 on Breadboard with LED](/IMG_9176.MOV)
