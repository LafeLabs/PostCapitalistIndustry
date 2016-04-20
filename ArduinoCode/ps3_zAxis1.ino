






int pinArray[] = {6,7,8,9};
int lookupT[] = {250,200,180,140,120,100,80,60,50,40,30,20,15,10,7,3};
int x = 0;
int T = 0;
int z = 0;
int index = 0;

void setup() {
  Serial.begin(115200);
  for(index = 0;index < 4;index++){
    pinMode(pinArray[index],OUTPUT);
  }
}

void loop() {
  x = 509 - analogRead(A0);
  if(abs(x) > 1){
    T = lookupT[abs(x)];
    z = z + (x/abs(x));    
    digitalWrite(pinArray[z%4],HIGH);
    delay(T);
    digitalWrite(pinArray[z%4],LOW);
    Serial.print("T = ");
    Serial.print(T);
    Serial.print(" z = ");
    Serial.print(z);
    Serial.print(" pin = ");
    Serial.print(z%4);
    Serial.println();
  }

}
