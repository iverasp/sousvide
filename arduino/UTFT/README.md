## What is this

The UTFT-library makes use of Port D (pins D0-D7) on the Arduino UNO for communication with the display. As we need pins D0-D1 for tx/rx the library will have to be customized to use other pins for the display (SoftwareSerial was way too slow when used with UTFT). Also, the CS-pin of the LCD is not needed and has been removed from the library (saves another pin).
