/*
Software for running AT-commands on the HC-06.
Almost a copy of the code available at http://arduino.cc/en/Reference/SoftwareSerial

Connection:
TX of HC-06 to pin 10 of the Arduino UNO.
RX of the HC-06 to pin 11 of the Arduino UNO through
a voltage divider (i.e. 18k and 33k resistors for dropping 5V to ~3.3V).
*/

#include <SoftwareSerial.h>

SoftwareSerial mySerial(10, 11); // RX, TX

void setup() {
  Serial.begin(9600);
  
  Serial.println("Goodnight moon!");
  
  mySerial.begin(9600);
  
}

void loop() {
  if (mySerial.available())
    Serial.write(mySerial.read());
  if (Serial.available())
    mySerial.write(Serial.read());
}
