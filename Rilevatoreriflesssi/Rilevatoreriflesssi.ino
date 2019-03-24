#include <LiquidCrystal.h>

LiquidCrystal (12,10,8,6,4,2)

int suonobuzzer = 1;
int bottonereset = 3;
int bottone-led = 5;
int bottone-suono = 7;
int rgbled = (9,11);


void setup() {
  // put your setup code here, to run once:

Comandobottoneled;   
Comandobottonebuzer;
Displaylcd;

}

void loop() {
  // put your main code here, to run repeatedly:

}

void Comandobottoneled
{
buttonstatus=digitalRead(button);
if (button status == LOW);
{
digitalWrite (ledacaso, HIGH);
delay(5000);
digitalWrite (ledacaso, HIGH);
}
else
{
digitalWrite (ledacaso, HIGH);
}
}

void Comandobottonebuzzer
{
if (suonobuzzer == HIGH);
{
 digitalWrite (rgbled = HIGH);
 tone (suonobuzzer, 1000, 2000)
}
}

void Displaylcd
{
Lcd.setCursor(0, 0);
Lcd.print(“Test luce”); 
delay (2000);
Lcd.clear();
Lcd.setCursor(0, 1);
Lcd.print(“Test suono”);
delay (2000);
Lcd.clear();  
}
