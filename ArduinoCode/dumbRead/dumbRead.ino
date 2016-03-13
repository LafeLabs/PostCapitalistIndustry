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
  Serial.begin(115200);
}

void loop() {
  x = analogRead(A4) - x0;
  Serial.println(x);
  delay(1);
}
