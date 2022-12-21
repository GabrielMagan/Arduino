#include <Adafruit_NeoPixel.h>
#define PIN 2 
#define NUMPIXELS 20

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

void setup(){
  pixels.begin();
  for(int i = 0; i <= NUMPIXELS; i++){
    pixels.setPixelColor(i, pixels.Color(255, 0, 35));
    pixels.show();
    delay(10);
 }
}
void loop(){
  delay(1000);
}
