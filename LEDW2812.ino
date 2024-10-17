#include <Adafruit_NeoPixel.h>
#define PIN 6
#define NUMPIXELS 20

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

void setup(){
  pixels.begin();
  pixels.clear();
  pixels.show();
  Serial.begin(9600); //Inicializa a comunicação serial
  pinMode(7, INPUT); // Declara o pino do sensor como entrada (INPUT)

}
void loop(){
  int LeituraSensor = digitalRead(7); //Leitura de dados do sensor
  Serial.print("Leitura do sensor: ");
  Serial.println(LeituraSensor);
  if (LeituraSensor == LOW)
  { //Se a leitura do sensor for igual a LOW..
   
  animacao();
    
    delay(5000);
  }
  else { // Se o valor de leitura do sensor NÃO for igual a LOW
    digitalWrite(7, LOW); // Apaga o LED
    for(int i = 0; i <= 10; i++)
    {
    pixels.setPixelColor(i, pixels.Color(0, 0, 0));
    pixels.show();
    }
  }
}

void animacao()
{
   for(int i = 0; i <= 10; i++)
    {
    pixels.setPixelColor(i, pixels.Color(255, 0, 0));
    delay(100);
    pixels.show();
    }
     for(int i = 0; i <= 10; i++)
    {
    pixels.setPixelColor(i, pixels.Color(0, 0, 0));
    pixels.show();
    }
    delay(250);
     for(int i = 0; i <= 10; i++)
    {
    pixels.setPixelColor(i, pixels.Color(255, 0, 0));
    pixels.show();
    }
    delay(250);
      for(int i = 0; i <= 10; i++)
    {
    pixels.setPixelColor(i, pixels.Color(0, 0, 0));
    pixels.show();
    }
    delay(250);
     for(int i = 0; i <= 10; i++)
    {
    pixels.setPixelColor(i, pixels.Color(255, 0, 0));
    pixels.show();
    }
    delay(250);
      for(int i = 0; i <= 10; i++)
    {
    pixels.setPixelColor(i, pixels.Color(0, 0, 0));
    pixels.show();
    }
    delay(250);
     for(int i = 0; i <= 10; i++)
    {
    pixels.setPixelColor(i, pixels.Color(255, 0, 0));
    pixels.show();
    }
    delay(250);
      for(int i = 0; i <= 10; i++)
    {
    pixels.setPixelColor(i, pixels.Color(0, 0, 0));
    pixels.show();
    }
    delay(250);
     for(int i = 0; i <= 10; i++)
    {
    pixels.setPixelColor(i, pixels.Color(255, 0, 0));
    pixels.show();
    }
    delay(250);
      for(int i = 0; i <= 10; i++)
    {
    pixels.setPixelColor(i, pixels.Color(0, 0, 0));
    pixels.show();
    }
    delay(250);
     for(int i = 0; i <= 10; i++)
    {
    pixels.setPixelColor(i, pixels.Color(255, 0, 0));
    pixels.show();
    }
    delay(250);
}
