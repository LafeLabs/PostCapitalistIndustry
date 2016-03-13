int pinArray[] = {5,6,9,10};
int pinIndex = 0;
int buttonPinA = 2;
int buttonPinB = 3;
boolean buttonStateA = LOW;
boolean buttonStateB = LOW;

int x = 0;
int y = 0;


void setup() {
  int x0 = analogRead(A4);
  int y0 = analogRead(A5); 
  pinMode(buttonPinA,INPUT);
  pinMode(buttonPinB,INPUT); 
}

void loop() {
  buttonStateA = digitalRead(buttonPinA);
  buttonStateB = digitalRead(buttonPinB);
  if(buttonStateA && !buttonStateB){
    analogWrite(pinArray[0], 255);
  }
  if(buttonStateB && !buttonStateA){
    analogWrite(pinArray[1], 255);
  }
  else{
    analogWrite(pinArray[0], 0);
    analogWrite(pinArray[1], 0);
  }
}
