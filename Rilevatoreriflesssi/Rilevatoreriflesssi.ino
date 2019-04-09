#include <LiquidCrystal.h>
LiquidCrystal lcd(8,9,10,11,12,13);

int suonobuzzer =1;
int bottone_reset = 2;
int bottone_led = 3;
int bottone_suono = 4;
int rgbledrosso = 5;
int rgbledverde = 6;
int ledgiallo = 7;
int tempoled = 0;
int temposuonobuzzer = 0;

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
digitalWrite (rgbledrosso, LOW); 
digitalWrite (rgbledverde, LOW);
lcd.clear();
if (digitalRead(bottone_reset)==HIGH)
{
lcd.setCursor(0, 0);
lcd.print("Inizia Test");
Comandobottoneled();   
Comandobottonebuzzer();
Rgb();
delay(5000);
}


}

void Comandobottoneled()//metodo del bottone con l'accensione del led
{
tempoled = 0;
delay (random(1000,5000));
digitalWrite (ledgiallo, HIGH);
while (digitalRead (bottone_led) ==LOW)
{
delay (10);
tempoled = tempoled + 10;
}
lcd.setCursor(0,0);
lcd.print("Test luce:" + String(tempoled)+ "ms");
digitalWrite (ledgiallo, LOW);
}

void Comandobottonebuzzer()//metodo del bottone con il suono del buzzer
{
temposuonobuzzer = 0;
delay (random(1000,5000));
tone(suonobuzzer,1000);
while (digitalRead (bottone_suono) ==LOW)
{
delay (10);
temposuonobuzzer = temposuonobuzzer + 10;
}
lcd.setCursor(0,1);
lcd.print ("Test suono:" + String(temposuonobuzzer) + "ms");
noTone(suonobuzzer);
}

void Rgb()//metodo per  l'rgb, fa cambiare il colore a seconda dei valori ottenuti
{
if (tempoled > 300 || temposuonobuzzer > 300)
{
digitalWrite(rgbledrosso, HIGH);
}
else
{
digitalWrite(rgbledverde, HIGH);
}
}
