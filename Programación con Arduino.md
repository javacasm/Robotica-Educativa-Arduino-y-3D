<!-- background: #184bc6-->
<!-- color: #fff -->
<!-- font: centurygothic -->

## Robótica Educativa: proyectos con arduino, 3D
### Arduino
## CEP Granada              
Febrero 2015
![CC](https://licensebuttons.net/l/by-sa/3.0/88x31.png)
## José Antonio Vacas  @javacasm
[Presentación](https://swipe.to/1586cc)

***

<!-- background: #184bc6-->
<!-- color: #fff -->
<!-- font: centurygothic -->

# Programas en Arduino

* Dentro de arduino sólo puede haber **1** programa

* Cada vez que programamos borramos el anterior

* El programa se ejecuta en bucle infinitamente

* No se puede recuperar el código de un programa en ejecución (fácilmente)

***

<!-- background: #184bc6-->
<!-- color: #fff -->
<!-- font: centurygothic -->

## Introducción [Bitbloq](http://bitbloq.bq.com)

Usamos bloques para definir los programas:

* bloques electrónicos (led, pulsadores)
* bloques matemáticos (opearaciones)
* bloques de control (bucles, pausas, condicionales)
* bloques de variables

***

<!-- background: #184bc6-->
<!-- color: #fff -->
<!-- font: centurygothic -->

## Parpadeo [Bitbloq](http://bitbloq.bq.com) 

* LED encendido
* Esperamos
* LED apagado
* Esperamos

Utilizamos el pin 13 porque ya tiene un led conectado en la placa

[Parpadeo bitbloq](https://github.com/javacasm/Robotica-Educativa-Arduino-y-3D/blob/master/ejemplos/1.%20Parpadeo%20CEP.xml) (Compartido como 1. Parpadeo CEP)


***

<!-- background: #184bc6-->
<!-- color: #fff -->
<!-- font: centurygothic -->

# C++ Parpadeo

![blink](http://arduino.cc/en/uploads/Tutorial/ExampleCircuit_bb.png)

int led = 13;

void setup() {                
  pinMode(led, OUTPUT);     
}

void loop() {
  digitalWrite(led, HIGH);   // Encendemos
  delay(1000);               // Esperamos
  digitalWrite(led, LOW);    // Apagamos
  delay(1000);               // Esperamos
}

***

<!-- background: #184bc6-->
<!-- color: #fff -->
<!-- font: centurygothic -->

# [Bitbloq](http://bitbloq.bq.com)

Montaje en la placa de prototipos

![blink](http://4.bp.blogspot.com/-bSwcT88QabE/UVuMY29lHfI/AAAAAAAAAAw/wyLijXEmafk/s1600/01+Blinky_bb.png)

Ejercicio: Cambiamos al pin 8 

¡¡Añadimos la resistencia!!

***

<!-- background: #184bc6-->
<!-- color: #fff -->
<!-- font: centurygothic -->

# [Bitbloq](http://bitbloq.bq.com) 
## Semáforo

2 leds (rojo y verde) se alternan


* LED Rojo encendido y Verde apagado
* Esperamos
* LED Rojo apagado y Verde encendido
* Esperamos

[Semáforo bitbloq](https://github.com/javacasm/Robotica-Educativa-Arduino-y-3D/blob/master/ejemplos/Semaforo%20CEP.xml)


***
# C++ Semáforo

	int ledrojo=8;
	int ledverde=9;
	void setup()
	{ pinMode(ledverde,OUTPUT);
	  pinMode(ledrojo,OUTPUT);
	}
	void loop()
	{ int esperaVerde=1000;
	  int esperaRojo=500;
	  digitalWrite(ledverde,LOW);
	  digitalWrite(ledrojo,HIGH);
	  delay(esperaVerde);
	  digitalWrite(ledrojo,LOW);
	  digitalWrite(ledverde,HIGH);
	  delay(esperaRojo);
	}


[código](https://github.com/javacasm/Robotica-Educativa-Arduino-y-3D/tree/master/codigo/Semaforo)
***

<!-- background: #184bc6-->
<!-- color: #fff -->
<!-- font: centurygothic -->

## Sentencias de control [Bitbloq](http://bitbloq.bq.com)

* Bucles
	Ejercicio: Hacer 10 parpadeos, esperar 2 segundos, 10 parpadeos, 2 segundos...

* Condicionales
	Ejercicio: En función del valor de un potenciómetros encender 2 leds: Por debajo de 300 rojo, mayor de 600 verde y en medio ninguno.
