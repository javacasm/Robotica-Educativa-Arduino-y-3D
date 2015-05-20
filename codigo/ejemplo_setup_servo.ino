void setup_servo() 
{ 
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object 
} 
void setup_motor() 
{ 
    pinMode(M1, OUTPUT);   
    pinMode(M2, OUTPUT); 
} 
void setup() {
  setup_servo();
  setup_motor();

}

void loop() {
  int distancia=funcioanDistancia();
  if(distancia<10)
  {
     // parar
     
     servo.write(0);
     int distancia0=funcionDistancia();
     servo.write(180);
     int ditancia180=funcionDistancia();
     
     if(distancia0<distancia180)
     {
       // giroa0
        digitalWrite(M1,HIGH);   
        digitalWrite(M2, LOW);       
        analogWrite(E1, 255);   //PWM Speed Control
        analogWrite(E2, 255);   //PWM Speed Control
        delay(200); 
     }
     else
     {
        // giroa0
        digitalWrite(M1,LOW);   
        digitalWrite(M2, HIGH);       
        analogWrite(E1, 255);   //PWM Speed Control
        analogWrite(E2, 255);   //PWM Speed Control
        delay(200); 
     }
      digitalWrite(M1,HIGH);   
        digitalWrite(M2, HIGH);       
        analogWrite(E1, 255);   //PWM Speed Control
        analogWrite(E2, 255);   //PWM Speed Control
  }
  else
  {
      digitalWrite(M1,HIGH);   
        digitalWrite(M2, HIGH);       
        analogWrite(E1, 255);   //PWM Speed Control
        analogWrite(E2, 255);   //PWM Speed Control
  }
  
}libiw30:amd64