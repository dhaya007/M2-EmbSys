#include <Keypad.h>
#include <SoftwareSerial.h>
#include <LiquidCrystal.h>
#include <TimerOne.h>



const int buz = 11;
const byte ROWS = 4; 
const byte COLS = 3; 

int annalogpin[3] = {A0,A1,A2};
LiquidCrystal lcd(7, 6, 5, 4, 3, 2);
//LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
unsigned int  Lit1, temp2, temp3,t=0,Lit,stp,st;
boolean g1,g2,g3;
SoftwareSerial Serial1(8, 9); // RX,TX

char hexaKeys[ROWS][COLS] = {
  {'1', '2', '3'},
  {'4', '5', '6'},
  {'7', '8', '9'},
  {'*', '0', '#'}
};

byte rowPins[ROWS] = {A2, A3, A4, A5}; 
byte colPins[COLS] = {8, 9, 10}; 

Keypad customKeypad = Keypad(makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS); 

void setup()
{
  Serial.begin(9600);
  pinMode(buz, OUTPUT);
  digitalWrite(buz, LOW);
  lcd.begin(16, 2);
  lcd.setCursor(0, 0);
  lcd.print("SMART WATCH");

  delay(1000);
  int pi=0;
  lcd.clear();
}
  
void loop()
{
  char customKey = customKeypad.getKey();
  
      if (customKey)
      {
          Serial.print(customKey);
          lcd.setCursor(15, 0); 
          lcd.print(customKey);
      }
    temp3 = analogRead(A0);
    st = analogRead(A1);
    temp2=temp3*2;
   if(st>500)
      {
          stp=t;
          t++;
          lcd.setCursor(0, 0);
          delay(250);
      } 
  stp=t;
  lcd.setCursor(0, 1);
  lcd.print("step:");
  lcd.print(stp/100);
  lcd.print((stp%100)/10);
  lcd.print((stp%100)%10);
  lcd.print("Temp:");
  lcd.print(temp2/100);
  lcd.print((temp2%100)/10);
  lcd.print(".");
  lcd.print((temp2%100)%10);
  
  if(temp2>450)
      {
          digitalWrite(buz , HIGH);
          lcd.setCursor(0, 0);
          delay(250);
          lcd.print("Body temp.HIGH ");
          
      }
  
  if(temp2>350 && temp2<440)
      {
          digitalWrite(buz , LOW);
          lcd.setCursor(0, 0);
          delay(250);
          lcd.print("temp. normal   "); 
          
          
      }
      if(temp2>1 && temp2<340)
      {
          digitalWrite(buz , HIGH);
          lcd.setCursor(0, 0);
          delay(250);
          lcd.print("temp. low   "); 
          
          
      }
  }
