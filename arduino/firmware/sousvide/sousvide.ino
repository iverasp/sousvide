#include <UTFT.h>
// from http://henningkarlsen.com/electronics/library.php?id=51
#include <Wire.h>
#include <EEPROM.h>
#include <PID_v1.h>

#define btnPin 4
#define relayPin 2

/*
// Declare variables for PID
double Setpoint, Input, Output;
PID pid(&Input, &Output, &Setpoint,2,5,1, DIRECT);
int WindowSize = 5000;
unsigned long windowStartTime;
*/

// Declare which fonts we will be using
extern uint8_t arial_bold[];
extern uint8_t Shruti_Bold_num_48x70[];
extern uint8_t DotMatrix_M[];

// Setup LCD
UTFT lcd(ILI9325C,A3,A2,A0);
/*
RS -> 19 / A3
RW -> 18 / A2
RST -> 16 / A0
*/

float dial;
float dialOld;
float setTemp = dial;
float actual = 30;

// Declare screen size
int WIDTH = 320;
int HEIGHT = 240;
int HEADER = 40;
int PADDING = 8;
int CENTERING = 7;
byte res = 0;
int k = 15;
int varTxt = 245;
int realAct = 63;

void setup() {
  
  Serial.begin(9600);
  
  Wire.begin();
  
  pinMode(btnPin, INPUT);
  
  dial = readEEPROM();
  setTemp = dial;
  
  lcd.InitLCD();
  lcd.setFont(arial_bold);
  
  lcd.clrScr();
 
  lcd.fillScr(29, 41, 81); // 15, 30, 80
  lcd.setBackColor(29, 41, 81);
  
  lcd.setColor(255, 165, 0);
  lcd.print("actual", CENTER, 240 / 2 - lcd.getFontYsize() - 53);
  int arial_bold_width = lcd.getFontXsize();
  int arial_bold_height = lcd.getFontYsize();
  lcd.print("dial", LEFT + PADDING, 60 + k);
  lcd.print("set", RIGHT - PADDING, 60 + k);
  lcd.setFont(Shruti_Bold_num_48x70);
  lcd.setColor(255,255,255);
  int shruti_bold_width = lcd.getFontXsize();
  int shruti_bold_height = lcd.getFontYsize();
  lcd.printNumI(realAct, (int) lcd.getDisplayXSize() / 2 - shruti_bold_width - arial_bold_width + CENTERING, 60 + k);
  lcd.setFont(DotMatrix_M);
  lcd.printNumF(setTemp, 1, varTxt, 60 + lcd.getFontYsize() + k, ',', 3, '    ');
  
  lcd.setFont(arial_bold);
  lcd.printNumI((int) 7, (int) lcd.getDisplayXSize() / 2 + 35 + CENTERING, 60 + k + (int) shruti_bold_height / 2 - (int) arial_bold_height / 2);
 
  lcd.setFont(DotMatrix_M);

}
  
void loop() {
  Serial.println("418 - I'm a water bath");
 
  Wire.requestFrom(4, 1);
 
  while(Wire.available())
  {
  dial = (float) Wire.read() / 2;
  }
  
  if (dial != dialOld) {

    dialOld = dial;
    lcd.printNumF(dial, 1, LEFT + PADDING, 60 + lcd.getFontYsize() + k, ',', 3, '    ');
  }
  
  if (digitalRead(btnPin) == HIGH) {
    setTemp = dial;
    lcd.printNumF(setTemp, 1, varTxt, 60 + lcd.getFontYsize() + k, ',', 3, '    ');
    writeEEPROM(setTemp);
  }
  
}

float readEEPROM() {
  byte tmp = EEPROM.read(0);
  float result = (float)(tmp) / 2;
  return result;
}

void writeEEPROM(float val) {
  byte tmp = (byte) (val * 2);
  EEPROM.write(0, tmp);
}
  
