//all property is evil, none claimed here

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
  if(index == eights){
    green[index] = 255;
  }
  else{
    green[index] = 0;
  }
  if(index == sixtyfours){
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
