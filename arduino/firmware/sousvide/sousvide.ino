#include <UTFT.h>
// from http://henningkarlsen.com/electronics/library.php?id=51
#include <Encoder.h>
// from http://www.pjrc.com/teensy/td_libs_Encoder.html

// Declare which fonts we will be using
extern uint8_t DotMatrix_M[];

// Setup LCD
UTFT lcd(ILI9325C,19,18,17,16);
/*
RS -> 19 / A5
RW -> 18 / A4
CS -> 17 / A3
RST -> 16 / A2
*/

// Setup rotary encoder
Encoder enc(2, 3);
float oldPos = -999.;
float setTemp = 30.;
float readTemp = setTemp;
int btnPin = 4;

// Declare screen size
int WIDTH = 320;
int HEIGHT = 240;
int HEADER = 40;

void setup() {
  
  Serial.begin(9600);
  
  enc.write(10);
  pinMode(btnPin, INPUT);
  
  
  lcd.InitLCD();
  lcd.setFont(DotMatrix_M);
  
  lcd.clrScr();
  mySetColor();
  lcd.fillScr(15, 30, 80);
  
  lcd.setColor(40, 40, 140);
  lcd.fillRect(0, 0, WIDTH, HEADER);
  
  lcd.setColor(255, 255, 255);
  lcd.setBackColor(40, 40, 140);
  lcd.print("settings", LEFT + 10, 10);
  lcd.setColor(255, 165, 0);
  lcd.setBackColor(15, 30, 80);
  lcd.print("dial:", LEFT + 10, 120);
  lcd.print("set:", RIGHT - 25, 120);
  lcd.print("act:", CENTER, 120);
  lcd.printNumF(setTemp, 1, RIGHT - 60, 150, ',', 3, '    ');
  //addRow(HEADER + 5);
}
  
void loop() {

  float newPos = enc.read() / 8.;
  Serial.println(enc.read());
  if (newPos > 99) enc.write(99. * 8.);
  if (newPos < 10) enc.write(10. * 8.);
  if (newPos != oldPos && newPos >= 10 && newPos <= 99) {
    oldPos = newPos;
    lcd.printNumF(newPos, 1, LEFT + 10, 150, ',', 3, '    ');
  }
  
  if (digitalRead(btnPin) == HIGH) {
    readTemp = newPos;
    setTemp = readTemp;
    lcd.printNumF(setTemp, 1, RIGHT - 60, 150, ',', 3, '    ');
  }
  
}

void mySetColor() {
  lcd.setColor(15, 30, 80);
}

void mySetBackColor() {
  lcd.setBackColor(15, 30, 80);
}

void addRow(int startPos) {
  lcd.setColor(0,0,0);
  lcd.drawLine(0, startPos, lcd.getDisplayXSize(), startPos);
  lcd.drawLine(0, startPos + lcd.getFontYsize(), lcd.getDisplayXSize(), startPos + lcd.getFontYsize());
}
