
    /***   Global variables   ***/

/***   Function declaration   ***/

void setup()
{
  Serial.begin(9600);

  pinMode(11,OUTPUT);

  pinMode(12,OUTPUT);

}
// Tres niveles
// <300 rojo
// >600 verde
// >300 y <600 ninguno encendido

void loop()
{
  // Leemos el valor de un potenciométro y en función de su valor encendemos el led verde si es mayor de 500 y el rojo en otro caso
  int valorPotenciometro=analogRead(A0);
  Serial.println(valorPotenciometro);
  if (valorPotenciometro < 300) 
  { Serial.println("Nivel bajo");
    digitalWrite(11,HIGH);
    digitalWrite(12,LOW);
  }else  //comentario
   {    if(valorPoteciometro>600)    
        {  Serial.println("Nivel alto");
           digitalWrite(12,HIGH);
           digitalWrite(11,LOW);
        } else
        {  Serial.println("Nivel medio");
           digitalWrite(12,LOW);
           digitalWrite(11,LOW);      
         }
   }

}

/***   Function definition   ***/



