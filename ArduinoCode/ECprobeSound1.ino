/* 
FUCK PATENTS FUCK COPYRIGHT FUCK ALL PROPERTY "LAW" NO LICENSE NO LAW NO PATENTS NO COPYRIGHTS


electrochemical probe with square wave output for sound


FUCK PATENTS FUCK COPYRIGHT FUCK ALL PROPERTY "LAW" NO LICENSE NO LAW NO PATENTS NO COPYRIGHTS NO MONEY NO MINING
*/


int x = 0;
int zSet = 512;
int deltaZ = 25;
boolean squareWave = false;

void setup() {
  Serial.begin(115200);
  analogWrite(9,0);
  delay(1000);  
  pinMode(11,OUTPUT);
}

void loop() {

  analogWrite(9,255);
  while(x < zSet + deltaZ){
    x = analogRead(A4);  
    Serial.println(x);
    delay(1);
  }
  analogWrite(9,0);
  while(x > zSet - deltaZ){
    x = analogRead(A4);  
    Serial.println(x);
    delay(1);
  }
  digitalWrite(11,squareWave);
  squareWave = !squareWave;
}
