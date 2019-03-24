#include <LiquidCrystal.h>
LiquidCrystal (12,10,8,6,4,2)

int suonobuzzer = 1;
int bottone-reset = 3;
int bottone-led = 5;
int bottone-suono = 7;
int rgbled = (9,11);
int ledbianco = (13);

void setup() {
  // put your setup code here, to run once:
pinMode (ledbianco, OUTPUT);
pinMode (suonobuzzer, OUTPUT);
pinMode (rgbled, OUTPUT);
pinMode (bottone-reset, INPUT);
pinMode (bottone-led, INPUT);
pinMode (bottone-suono, INPUT);
lcd.begin (16,2);

}

void loop() {
  // put your main code here, to run repeatedly:
Comandobottoneled;   
Comandobottonebuzer;
Displaylcd;
Buzzer-rgb;
}

void Comandobottoneled
{
while (ledbianco = HIGH)
digitalWrite (bottone-led = HIGH)
delay (random(1000,5000))
}

void Comandobottonebuzzer
{
while (suonobuzzer = HIGH)
digitalWrite (bottone-suono = HIGH)
delay (random(1000,5000))
}

void Buzzer-rgb
{
while (suonobuzzer = HIGH)
digitalWrite (rgbled = HIGH)
delay (random(1000,5000))
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
