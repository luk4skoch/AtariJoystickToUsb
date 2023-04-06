# AtariJoystickToUsb

##Introduction
In this project I put a Raspberry pi PICO microcontroller into an old joystick to replace the 9pin Atari-Joystick-Port with USB.
There are 8 buttons available but you could add 20 more buttons (The PICO has 28 GPIOs).

##Requiremnts
* Raspberry Pi PICO
* Joystick
* USB cable (A to micro)
* Soldering Iron
* Solder
* 8 x 10kOhm Resistor
* Screw driver
* some small cables

##Instructions
Solder the joystick buttons to pin2 - pin9 and 3.3V.
Additionally add a 10kOhm resistor as pulldown to ground for every button, so it won't float.*
Connect your Raspberry pi PICO to Arduino IDE and upload the Joysick.ino file.

*You could also use the resistors as pullup but then you have to connect the pins to GND instead of 3.3V.

##Images
![image](https://user-images.githubusercontent.com/98104822/230372347-77db142b-2f04-4574-baae-15ceaa9239e9.png)
Raspberry pi PICO used pins

![image](https://user-images.githubusercontent.com/98104822/230369706-20155682-b852-4408-8231-78ee0d4636c0.png)
Example of PULL UP / PULL DOWN

![image](https://user-images.githubusercontent.com/98104822/230370076-7ae770da-dd65-4f0f-bb44-95a96c3ec0a1.png)
Resistos soldered to a tree
