## What is this

The UTFT-library makes use of Port D (pins D0-D7) on the Arduino UNO for communication with the display. As we need pins D0-D1 for tx/rx the library will have to be customized to use other pins for the display (SoftwareSerial was way too slow when used with UTFT). Also, the CS-pin of the LCD is not needed and has been removed from the library (saves another pin).

The following changes have been made:
- Removed all code that is not used in this project
- Removed the CS-pin
- Changed the pins on the Arduino for DB0-DB7 of the LCD
