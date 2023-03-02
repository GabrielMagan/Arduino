//controle
#define frente 12 
#define tras 13
#define direita 11
#define esquerda 10
//controle motor 1
#define m1 2
#define m2 3
//controle motor 2
#define m3 4
#define m4 5
//leds
#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
#include <avr/power.h> 
#endif
#define PIN        8 
#define NUMPIXELS 20
#define DELAYVAL 500 
#define tempo 20

Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

void setup()
{
  
#if defined(__AVR_ATtiny85__) && (F_CPU == 16000000)
  clock_prescale_set(clock_div_1);
#endif
  pixels.begin(); 
  Serial.begin(9600);
  pinMode(frente, INPUT_PULLUP);
  pinMode(tras, INPUT_PULLUP);
  pinMode(direita, INPUT_PULLUP);
  pinMode(esquerda, INPUT_PULLUP);
  pinMode(esquerda, INPUT_PULLUP);

  pinMode(m1, OUTPUT);
  pinMode(m2, OUTPUT);
  pinMode(m3, OUTPUT);
  pinMode(m4, OUTPUT);
  Serial.begin(9600);
  Serial.println("serial Open");
  for(int i = 0; i <= 10; i++){
      pixels.setPixelColor(i, pixels.Color(5, 255, 255));
      int calc = (i*-1)+19;
      Serial.println(calc);
      pixels.setPixelColor(calc, pixels.Color(5, 255, 255));
      pixels.show();
      delay(70);  
  }
  modulo();
  delay(500);
}

void loop(){
  if (!digitalRead(frente)) 
  {
    Serial.println("frente");
    digitalWrite(m1, HIGH);
    digitalWrite(m2, LOW);
    digitalWrite(m3, HIGH);
    digitalWrite(m4, LOW);
    ledFrente();
  }
  else if(!digitalRead(tras))
  {
    Serial.println("tras");
    digitalWrite(m1, LOW);
    digitalWrite(m2, HIGH);
    digitalWrite(m3, LOW);
    digitalWrite(m4, HIGH);
    ledTraz();
  }
  else if(!digitalRead(direita))
  {
    Serial.println("direita");
    digitalWrite(m1, LOW);
    digitalWrite(m2, HIGH);
    digitalWrite(m3, HIGH);
    digitalWrite(m4, LOW);
    ledDireita();  
  }
  else if(!digitalRead(esquerda))
  {
    Serial.println("esquerda");
    digitalWrite(m1, HIGH);
    digitalWrite(m2, LOW);
    digitalWrite(m3, LOW);
    digitalWrite(m4, HIGH);
    ledEsquerda();
  }
  else
  {
    Serial.println("parado");
    digitalWrite(m1, LOW);
    digitalWrite(m2, LOW);
    digitalWrite(m3, LOW);
    digitalWrite(m4, LOW);

    /**
    for (int i= 0 ; i <= 20 ; i++)
    {
    pixels.setPixelColor(i, pixels.Color(255, 255,255));
     //trocar pra branco
    }
    pixels.show();
    **/
    modulo();    
  }
}


void high(int led)
{
  pixels.setPixelColor(led, pixels.Color(255, 255, 0));
  pixels.show();     
}

void low(int led)
{
  pixels.setPixelColor(led, pixels.Color(0, 0, 0));
  pixels.show();   
}

void ledFrente()
{
  high(9);
  high(10);
  delay(tempo);
  low(9);
  low(10);
  high(8);
  high(11);
  delay(tempo);
  low(8);
  low(11);
  high(7);
  high(12);
  delay(tempo);
  low(7);
  low(12);
  high(6);
  high(13);
  delay(tempo);
  low(6);
  low(13);
  high(5);
  high(14);
  delay(tempo);
  low(5);
  low(14);
  high(4);
  high(15);
  delay(tempo);
  low(4);
  low(15);
  high(3);
  high(16);
  delay(tempo);
  low(3);
  low(16);
  high(2);
  high(17);
  delay(tempo);
  low(2);
  low(17);
  high(1);
  high(18);
  delay(tempo);
  low(1);
  low(18);
  high(0);
  high(19); 
  delay(tempo);
  low(19);
  low(0);
}

void modulo()
{
 pixels.setPixelColor(0, pixels.Color(27, 219, 239));
 pixels.setPixelColor(1, pixels.Color(27, 219, 239));
 pixels.setPixelColor(2, pixels.Color(237, 20, 91));
 for(int leds = 3; leds<=16; leds++)
  { 
    pixels.setPixelColor(leds, pixels.Color(27, 219, 239));
  }
  pixels.setPixelColor(17, pixels.Color(237, 20, 91));
  pixels.setPixelColor(18, pixels.Color(27, 219, 239));
  pixels.setPixelColor(19, pixels.Color(27, 219, 239));
  pixels.show();
}

void ledDireita()
{
  high(0);
  high(10);
  delay(tempo);
  low(0);
  low(10);
  high(1);
  high(11);
  delay(tempo);
  low(1);
  low(11);
  high(2);
  high(12);
  delay(tempo);
  low(2);
  low(12);
  high(3);
  high(13);  
  delay(tempo);
  low(3);
  low(13);
  high(4);
  high(14);
  delay(tempo);
  low(4);
  low(14);
  high(5);
  high(15);
  delay(tempo);
  low(5);
  low(15);
  high(6);
  high(16);
  delay(tempo);
  low(6);
  low(16);
  high(7);
  high(17);
  delay(tempo);
  low(7);
  low(17);
  high(8);
  high(18);
  delay(tempo);
  low(8);
  low(18);
  high(9);
  high(19);
  delay(tempo);
  low(19);
  low(9);
}

void ledEsquerda()
{
  high(0);
  high(10);
  delay(tempo);
  low(0);
  low(10);
  high(1);
  high(11);
  delay(tempo);
  low(1);
  low(11);
  high(2);
  high(12); 
  delay(tempo);
  low(2);
  low(12);
  high(3);
  high(13);
  delay(tempo);
  low(3);
  low(13);
  high(4);
  high(14);
  delay(tempo);
  low(4);
  low(14);
  high(5);
  high(15);
  delay(tempo);
  low(5);
  low(15);
  high(6);
  high(16);
  delay(tempo);
  low(6);
  low(16);
  high(7);
  high(17);
  delay(tempo);
  low(7);
  low(17);
  high(8);
  high(18); 
  delay(tempo);
  low(8);
  low(18);
  high(9);
  high(19);
  delay(tempo);
  low(9);
  low(19);
}

  
void ledTraz()
{
for(int i = 0; i <= 10; i++)
    {
     int valfrente = (i*-1)+19;
     pixels.setPixelColor(i, pixels.Color(255, 255, 0));
     pixels.setPixelColor(valfrente, pixels.Color(255, 255, 0));
     pixels.show();
     int valfrentereverse = (i*-1)+19;
     pixels.setPixelColor((i-1), pixels.Color(0, 0, 0));
     pixels.setPixelColor((valfrentereverse+1), pixels.Color(0, 0, 0));
     pixels.show();
     delay(tempo);
    }
}
