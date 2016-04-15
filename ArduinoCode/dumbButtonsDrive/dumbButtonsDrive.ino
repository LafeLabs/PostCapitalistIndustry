int pinArray[] = {2,3,4,5};
int buttonPinA = 11;
int buttonPinB = 12;
int knobPin = A1;
boolean buttonStateA = LOW;
boolean buttonStateB = LOW;
int index = 0;
int T = 0;

void setup() {
  pinMode(buttonPinA,INPUT);
  pinMode(buttonPinB,INPUT);   
  for(index = 0;index < 4;index++){
    pinMode(pinArray[index],OUTPUT);
  }
}

void loop() {
  T = 10 + (analogRead(knobPin))/5; //from 10 to 210 or so ms
  buttonStateA = digitalRead(buttonPinA);
  buttonStateB = digitalRead(buttonPinB);
  if(buttonStateA){
    for(index = 0;index < 4;index++){
      digitalWrite(pinArray[index],HIGH);
      delay(T);
      digitalWrite(pinArray[index],LOW);
    }
  }
  if(buttonStateB){
    for(index = 3;index >= 0;index--){
      digitalWrite(pinArray[index],HIGH);
      delay(T);
      digitalWrite(pinArray[index],LOW);
    }
  }
}
