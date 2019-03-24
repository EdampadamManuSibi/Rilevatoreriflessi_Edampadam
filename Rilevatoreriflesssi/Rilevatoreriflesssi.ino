#include <LiquidCrystal.h>
LiquidCrystal lcd(8,9,10,11,12,13);

int suonobuzzer = 4;
int bottone_reset = 7;
int bottone_led = 6;
int bottone_suono = 5;
int rgbledrosso = 2;
int rgbledverde = 1;

int ledgiallo = 3;

void setup() {
  // put your setup code here, to run once:
pinMode (ledgiallo, OUTPUT);
pinMode (suonobuzzer, OUTPUT);
pinMode (rgbled, OUTPUT);
pinMode (bottone_reset, INPUT);
pinMode (bottone_led, INPUT);
pinMode (bottone_suono, INPUT);
lcd.begin (16,2);

}

void loop() {
  // put your main code here, to run repeatedly:
if (digitalRead(bottone_reset, HIGH){
Comandobottoneled();   
Comandobottonebuzzer();
Buzzer_rgb();
Led_rgb();
Displaylcd();  
}


}

void Comandobottoneled()
{
delay (random(1000,5000));
digitalWrite (ledgiallo, HIGH);
double tempoled = 0;
while (digitalRead (bottone_led) ==LOW)
{
delay (10);
tempoled = tempoled + 0,01;
}
 }

void Comandobottonebuzzer()
{
delay (random(1000,5000));
digitalWrite (suonobuzzer, HIGH);
double temposuonobuzzer = 0;
while (digitalRead (bottone_suono) ==LOW)
{
delay (10);
temposuonobuzzer = temposuonobuzzer + 0,01;
}
 }

void Buzzer_rgb()
if (temposuonobuzzer < 200)
{
digitalWrite (rgbledverde, HIGH)
}
else if (temposuonobuzzer > 200)
{
digitalWrite (rgbledrosso, HIGH)
}

void Led_rgb()
if (tempoled < 200)
{
digitalWrite (rgbledverde, HIGH)
}
else if (tempoled > 200)
{
digitalWrite (rgbledrosso, HIGH)
}

void Displaylcd()
{
lcd.setCursor(0, 0);
lcd.print("Test con luce");
delay (2000);
lcd.clear();
lcd.setCursor(0, 1);
lcd.print("Test con suono");
delay (2000);
lcd.clear();  
}
