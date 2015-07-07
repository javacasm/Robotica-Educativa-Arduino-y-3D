const int analogInPin = A0;  // Analog input pin that the potentiometer is attached to
int sensorValue = 0;        // value read from the pot
void setup() {
  Serial.begin(9600); 
}
void loop() {
  // read the analog in value:
  sensorValue = analogRead(analogInPin);            
  float voltios=(5.0*sensorValue) /1023;
  Serial.print("sensor = " );                       
  Serial.print(sensorValue);    
  Serial.print(" = ");
  Serial.print(voltios);
  Serial.println("v");   
   delay(200);                     
}
