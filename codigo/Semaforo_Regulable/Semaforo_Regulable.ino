int ledrojo=8;
int ledverde=9;
void setup()
{ pinMode(ledverde,OUTPUT);
  pinMode(ledrojo,OUTPUT);
  Serial.begin(9600);
}
void loop()
{ int esperaVerde=analogRead(A0);
  int esperaRojo=esperaVerde/2;
  digitalWrite(ledverde,LOW);
  digitalWrite(ledrojo,HIGH);
  Serial.println("Rojo");
  delay(esperaVerde);
  digitalWrite(ledrojo,LOW);
  digitalWrite(ledverde,HIGH);
  Serial.println("Verde");
  delay(esperaRojo);
}
