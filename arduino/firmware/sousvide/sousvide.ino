#include <UTFT.h>
#include <Encoder.h>

// Declare which fonts we will be using
extern uint8_t BigFont[];
extern uint8_t SevenSegNumFont[];

// Setup LCD
UTFT lcd(ILI9325C,19,18,17,16);

// Setup rotary encoder
Encoder enc(10, 11);
float oldPos = -999.;
float setTemp = 30.;
float readTemp = setTemp;
int btnPin = 12;

// Declare screen size
int WIDTH = 320;
int HEIGHT = 240;
int HEADER = 40;

void setup() {
  
  enc.write(10);
  pinMode(btnPin, INPUT);
  
  
  lcd.InitLCD();
  lcd.setFont(BigFont);
  
  lcd.clrScr();
  mySetColor();
  lcd.fillScr(15, 30, 80);
  
  lcd.setColor(0, 42, 186);
  lcd.fillRect(0, 0, WIDTH, HEADER);
  
  lcd.setColor(255, 255, 255);
  lcd.setBackColor(0, 42, 186);
  lcd.print("Water bath", LEFT + 10, 10);
  lcd.setBackColor(15, 30, 80);
  lcd.print("dial:", LEFT + 10, 135);
  lcd.print("set:", RIGHT - 25, 135);
  lcd.print("act:", CENTER, 135);
  lcd.printNumF(setTemp, 1, RIGHT - 30, 150, ',', 3, '    ');
}

void loop() {

  float newPos = enc.read() / 8.;
  if (newPos > 99) enc.write(99. * 8.);
  if (newPos < 10) enc.write(10. * 8.);
  if (newPos != oldPos && newPos >= 10 && newPos <= 99) {
    oldPos = newPos;
    lcd.printNumF(newPos, 1, LEFT + 10, 150, ',', 3, '    ');
  }
  
  if (digitalRead(btnPin) == HIGH) {
    readTemp = newPos;
    setTemp = readTemp;
    lcd.printNumF(setTemp, 1, RIGHT - 30, 150, ',', 3, '    ');
  }
  
}

void mySetColor() {
  lcd.setColor(15, 30, 80);
}

void mySetBackColor() {
  lcd.setBackColor(15, 30, 80);
}
