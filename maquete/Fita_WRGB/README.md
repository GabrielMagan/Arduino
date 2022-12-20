<h1 align="center">
   <img align="center" alt="mgn-python" height="30" width="40" src="https://cdn.jsdelivr.net/gh/devicons/devicon/icons/cplusplus/cplusplus-original.svg"> Esquema Maquete <img align="center" alt="mgn-Csharp" height="30" width="40" src="https://cdn.jsdelivr.net/gh/devicons/devicon/icons/cplusplus/cplusplus-original.svg">
 </h1>

### ⚠️(Aviso)⚠️
- Para alimentação desse projeto é necessária uma fonte 12v 5A.
    
### 📋(Sobre)📋
- Em 2022 fiz um projeto de visão computacional para detecção de veículos, para demonstração eu e meu grupo construímos uma maquete em escala 1/267 da Avenida Paulista. Com o intuito de deixá-la mais real resolvemos colocar leds nos prédios, para isso foi necessário criar um esquema elétrico para ela.

<div align="center">
<img align="center" alt="mgn-python" height="500" width="900" src="https://user-images.githubusercontent.com/111460258/208560664-224eb946-9b77-4bb4-b934-97733ce32f30.png">
</div>

<h3>⚡ (Esquema) ⚡</h3>

- O esquema eletrico foi feito no tinkercad para poder simular as cargas aproximadas do sistema.

<div align="center">

  <a href="https://www.tinkercad.com/things/1YQovfJPuIY" target="_blank"><img height="500" width="900" src="https://user-images.githubusercontent.com/111460258/208561214-fc2bf783-3fd6-4b1d-9912-e0a4ca840985.png" target="_blank"></a>

</div>

- Para controlar a fita de led WRGB, foi desenvolvido um script para poder controlar as cores da fita.

```bash
#include <Adafruit_NeoPixel.h>
#define PIN 2 
#define NUMPIXELS 20

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

void setup()
{
  pixels.begin();
  for(int i = 0; i <= NUMPIXELS; i++){
      pixels.setPixelColor(i, pixels.Color(255, 0, 35));
      pixels.show();
      delay(10);
   }
}

void loop()
{
  delay(1000);
}
```
 
