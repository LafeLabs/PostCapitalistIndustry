/*
NO GODS NO MASTERS NO COPYRIGHT NO PATENT
FUCK ALL OF YOUR BULLSHIT!!!1


THIS GOD DAMN STUPID SHITTY CODE MAKES THE STEPPER MOTOTR TURN WITH BUTTONS ONE FOR UP AND ONE FOR DOWN, TURNS PRETTY SLOW
*/

int pinArray[] = {5,6,9,10}; 
int pinIndex = 0;
int buttonPinA = 7;
int buttonPinB = 8;
boolean buttonStateA = LOW;
boolean buttonStateB = LOW;
 
int z = 0;
int zserial = 0;
int deltaz = 0;
int index = 0;

void setup() {
 // Serial.begin(115200);
  pinMode(buttonPinA,INPUT);
  pinMode(buttonPinB,INPUT);
}

void loop() {
  buttonStateA = digitalRead(buttonPinA);//read first button[up]
  buttonStateB = digitalRead(buttonPinB);//read second button[down]
  if(buttonStateA){
    z = z + 1;
  }
  if(buttonStateB){
    z = z - 1;
  }  
  analogWrite(pinArray[z%4],255);
  delay(100);
  analogWrite(pinArray[z%4],0);
  delay(1);
  
}
