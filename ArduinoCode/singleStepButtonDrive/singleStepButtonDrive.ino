/*
NO GODS NO MASTERS NO COPYRIGHT NO PATENT


FUCK ALL OF YOUR BULLSHIT!!!1

*/

int pinArray[] = {5,6,9,10}; 
int pinIndex = 0;
int buttonPinA = 7;
int buttonPinB = 8;
boolean buttonStateA = LOW;
boolean buttonStateB = LOW;
boolean isOn = LOW;

int x = 0;
int y = 0;

void setup() {
  int x0 = analogRead(A4);
  int y0 = analogRead(A5);  
  pinMode(buttonPinA,INPUT);
  pinMode(buttonPinB,INPUT);
}

void loop() {
  buttonStateA = digitalRead(buttonPinA);//read first button[up]
  buttonStateB = digitalRead(buttonPinB);//read second button[down]

  if(buttonStateA && !buttonStateB && !isOn){//if up button pressed from off state
    pinIndex += 1;  //increment
    if(pinIndex > 3){ //if it's over 3, reset back to 0
      pinIndex = 0;
    }
    isOn = HIGH; //after this cycles we need to be sure it's set to ON to avoid
                //increment or decrement on next pass
  }
  if(buttonStateB && !buttonStateA && !isOn){//same for other button
    pinIndex -= 1;
    if(pinIndex < 0){
      pinIndex = 3;
    }
    isOn = HIGH;
  }

  if(buttonStateA || buttonStateB){
    isOn = HIGH;//set to high if any button is high, regardless of old or new
  }  
  if(!buttonStateA && !buttonStateB){
    isOn = LOW;//if both buttons are off, set to OFF state 
    analogWrite(pinArray[pinIndex],0);//and set pin to zero
  }
  else{ //"else" will only be when some button is high, in which case...
    analogWrite(pinArray[pinIndex],255); //turn PIN high
  }
  delay(1); //wait a short time to let thigns settle
}
