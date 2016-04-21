/*
FUCK PATENTS FUCK COPYRIGHT FUCK ALL PROPERTY "LAW" NO LICENSE NO LAW NO PATENTS NO COPYRIGHTS
Serial readout for LMT-87 temperature sensor from TI, data sheet found here: 
http://www.ti.com/lit/ds/symlink/lmt87-q1.pdf
This assumes V_cc is 3.3 V or 3300 mV, and I'm using a Arduino Pro Mini 3.3 to drive it.  By default temperature is in C, 
but K and F are provided.

Now Temperature REgulation added.  T_set is in C

April 2016
FUCK PATENTS FUCK COPYRIGHT FUCK ALL PROPERTY "LAW" NO LICENSE NO LAW NO PATENTS NO COPYRIGHTS
*/


int x = 0;  //I always call the serial data x because I fucking feel like it
float mV = 0.0; //voltage in mV, now floating point
float T_C = 0.0; //temperature in C
float T_set = 40.0; // setpoint in C
float T_K = 0.0; //kelvin
float T_F = 0.0; //faranheit 
int interval = 25;  //interval between points in ms

void setup() {
  Serial.begin(115200);  //baud rate of serial connection
}

void loop() {
  x = analogRead(A0);  //read A0
  mV = 3300.0*float(x)/1023.0;   //convert to float then conver to mV, assuming 3.3 V Vcc, also convert to mV not V
  T_C = 30 + (sqrt(184.47 + 0.01732*(2230.8 - mV)) - 13.582)/0.00866;  //exact parabolic solution from the data sheet
  T_F = 1.8*T_C + 32.0;  //convert to F
  T_K = T_C + 273.15;    //convert to K
  if(T_C < T_set){
    analogWrite(9,255);
  }
  else{
    analogWrite(9,0);
  }
  Serial.println(T_C);   //spit out the data
  delay(interval);       //wait
}
