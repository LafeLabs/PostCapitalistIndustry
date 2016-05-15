//all property is evil, none claimed here
/*

Octal Numerical readout for 9 bit number converted from 10 bit number
on 8 LED neopixel array

Red solid bar shows least sig digit(ones), position of green dot is 
eights(after the bit shift!), position of blue dot is 64s, also
after the bit shift.  Bit shift is needed to have octal line up with 
number of input bits for 10 bit ADC.  So this destroys the least
significant bit of information, making the analog input a bit 
less sensitive(literally one bit less sensitive)

bits can be added with some simple math for 24 pixel arrays etc.
*/


#include <Adafruit_NeoPixel.h>

#define PIN 10


int ones = 0;
int eights = 0;
int sixtyfours = 0;
int x = 0;
Adafruit_NeoPixel strip = Adafruit_NeoPixel(8, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  strip.begin();
  strip.show(); // Initialize all pixels to 'off'
  Serial.begin(115200);
}

void loop() {
x = analogRead(A0);
x = x >> 1;
ones = x%8;
eights = ((x-ones)%64)/8;
sixtyfours = ((x - ones - 8*eights)%512)/64;

int index = 0;

int red[] = {0,0,0,0,0,0,0,0};
int green[] = {0,0,0,0,0,0,0,0};
int blue[] = {0,0,0,0,0,0,0,0};

for(index = 0;index < 8;index++){
  if(index < ones){
    red[index] = 255;
  }
  else{
    red[index] = 0;
  }
  if(index == eights - 1 && eights != 0){
    green[index] = 255;
  }
  else{
    green[index] = 0;
  }
  if(index == sixtyfours - 1 && sixtyfours != 0){
    blue[index] = 255;
  }
  else{
    blue[index] = 0;
  }
}

for(index = 0;index < 8;index++){
  strip.setPixelColor(index,strip.Color(red[index], green[index], blue[index])); 
}
strip.show();
Serial.println(eights);
}
