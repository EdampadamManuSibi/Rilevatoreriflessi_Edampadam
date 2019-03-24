#include <LiquidCrystal.h>

int led = 4;
int beep= 5;
int ledacaso=6;
int button=7;
int button=9;
int button=11;
int ledblue=3;
int ledrosso=5;
int ledverde=6;
int b=1000;
int brightnessblue=150;
int brightnessrosso=150;                                                                   
int brightnessverde=150;
int dark = 0;
Liquidcrystal lcd (12,11,6,,4,3);
LiquidCrystal lcd (12,11,5,4,3,2);

void setup() {
  // put your setup code here, to run once:
pinmode(LED, output); 
pinmode(beep, output);
pinmode(ledacaso, output);
pinmode(button, input);
Pinmode (ledblue, output),
Pinmode (ledverde, output);
Pinmode (ledrosso, output);
Lcd.begin(16, 2);
Lcd.begin(16,2);
}

void loop() {
  // put your main code here, to run repeatedly:
comandolucesuono;
comandobottoneled;
comandoledrgb;
comandodisplaylcd;
Lyquid<cfostla;
}

void comandolucesuono
{
digitalWrite(led, high);
digitalWrite(beep, high);
delay(1000);
Digitalwrite(led, low); digitalwrite(beep, low);
delya(1000);
}

void comandobottoneled
{
buttonstatus=digitalRead(button);
If (button status == high);
{
digitalwrite(ledacaso, high);
delay(5000);
digitalwrite(ledacaso, low);
}
Else
{
Digitalwrite(ledacaso, LOW);
}
}

void comandoledrgb
{
analogwirte(ledblue, brightnessblue); delay (b);
analogwrite(led blue, dark);
analog(ledrosso,brightnessrosso);
delay(b); analogwrite(ledrosso, dark); analogwirte(levered, brightnessverde);
delay(b);
analogwrite(levered, dark);
}

void comandodisplaylcd
{
Lcd.setCursor (0, 0);
Ldc.print(“scrivi quello che vuoi”);
Lcd.setCursor (0, 1);
Lcd.print(“scrivi quello che vuoi nella seconda fila”):
}

void LiquidCrystal lcd (12,11,5,4,3,2);

{
Lcd.setCursor(0, 0);
Lcd.print(“parola che vuoi”); delay (2000);
Lcd.clear();
Lcd.setCursor(0, 1);
Lcd.print(“parola che vuoi”);
delay (2000);
Lcd.clear();
}


    //Scatola di cartone fisica, tester di riflessi; gli elementi da utilizzare sono
                                                                              //Un display lcd, un bazer cioè l’elemento che emette i suoni, un led, 3  pulsanti;  
                                                             //Un pulsante avvia il test Fare una scatola di cartone con davanti uno schermo lcd, sotto li mettere un pulsante rosso che avvia il test;
                                                           //Sotto all’lcd mettere un led bello luminoso e di fianco un bazer; sotto a quelli ci fanno gli altri due pulsanti quindi di fianco al primo 
                                                            //inserito, cioè quello rosso; dopo il primo c’è un numero di secondi random; e suona prendere il secondo 
