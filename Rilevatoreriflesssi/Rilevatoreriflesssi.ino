#include <LiquidCrystal.h>
LiquidCrystal lcd(8,9,10,11,12,13);

int suonobuzzer = 2;
int bottone_reset = 4;
int bottone_led = 6;
int bottone_suono = 7;
int rgbledrosso = 3;
int rgbledverde = 5;
int ledgiallo = 1;
int temposuonobuzzer;
int tempoled;

void setup() {
  // put your setup code here, to run once:
pinMode (ledgiallo, OUTPUT);
pinMode (suonobuzzer, OUTPUT);
pinMode (rgbledrosso, OUTPUT);
pinMode (rgbledverde, OUTPUT);
pinMode (bottone_reset, INPUT);
pinMode (bottone_led, INPUT);
pinMode (bottone_suono, INPUT);
lcd.begin (16,2);

}

void loop() {
  // put your main code here, to run repeatedly:
if (digitalRead(bottone_reset)==HIGH)
{
lcd.print("Test start");
delay(2000);
Displaylcd();
Comandobottoneled(); 
Displaylcd2();  
Comandobottonebuzzer();
Buzzer_rgb();
Led_rgb();
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
lcd.print(tempoled);
}

void Comandobottonebuzzer()
{
delay (random(1000,5000));
tone(suonobuzzer,500);
double temposuonobuzzer = 0;
while (digitalRead (bottone_suono) ==LOW)
{
delay (10);
temposuonobuzzer = temposuonobuzzer + 0,01;
}
lcd.print(temposuonobuzzer);
noTone(suonobuzzer);
}

void Buzzer_rgb()
{
if (temposuonobuzzer < 300)
{
digitalWrite (rgbledverde, HIGH);
}
else if (temposuonobuzzer > 300)
{
digitalWrite (rgbledrosso, HIGH);
}
}

void Led_rgb()
{
if (tempoled < 300)
{
digitalWrite (rgbledverde, HIGH);
}
else if (tempoled > 300)
{
digitalWrite (rgbledrosso, HIGH);
}
}

void Displaylcd()
{
lcd.setCursor(0, 0);
lcd.print("Test con luce");
delay (2000);
lcd.clear();
}
void Displaylcd2()
{
lcd.setCursor(0, 1);
lcd.print("Test con suono");
delay (2000);
lcd.clear();  
}
