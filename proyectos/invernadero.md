# Invernadero digital

![invernadero](https://pbs.twimg.com/profile_images/2105495865/IMG_1567_400x400.JPG)

## Descripción

Se medirán y registrarán variables meteorológicas: temperatura, humedad ambiental y humedad del suelo para decidir si se activan sistemas de riego o de ventilación. Los datos se guardan en una tarjeta SD de formato micro que puede ser leída desde un ordenador donde se podrán analizar. 

En este proyecto controlaremos 2 actuadores:

* Bomba de agua: en principio usaremos el relé para activarla, pero se puede probar a controlarla con la placa de motores. Dado que requiere bastante potencia para funcionar la conectaremos a la alimentación, interponiendo el contacto del relé que activaremos cuando el sensor de humedad de suelo detecte que el suelo está seco.

* Ventilador: en función de la temperatura/humedad del aire se decidirá un valor umbral, 1 grado por debajo del cual se activará el ventilador en una dirección. Cuando estemos un grado por encima del umbral se activará el ventilador en la dirección contraria. Se puede hacer que cuanto más lejos estemos del umbral, más rápido girará el ventilador. El ventilador estará conectado a la placa de control de motores que recibirá directamente la alimentación también.

## Componentes

* Sensor de temperatura y humedad [producto](http://www.seeedstudio.com/wiki/Grove_-_Temperature_and_Humidity_Sensor_Pro)
![sensor](http://www.seeedstudio.com/wiki/images/thumb/d/d1/Temp_humi_pro.jpg/400px-Temp_humi_pro.jpg)

## Modelo

Usaremos varias [cajas](http://www.thingiverse.com/thing:537560) 1 para un arduino con 3 shields y otras para los sensores que estarán en el exterior. Habrá que saber hacerlas re-dimensionandolas.
Soporte para ventilador de PC de 80x80


[sensores](http://www.thingiverse.com/javacasm/collections/sensores)
[Caja ventilada](http://www.thingiverse.com/thing:304617)
[Alternativas](http://www.thingiverse.com/javacasm/collections/caja-arduino)

[Invernaderos](http://www.thingiverse.com/javacasm/collections/invernadero)

## Ejemplos:

* Accionamiento de [motores]([Motor](http://www.dfrobot.com/wiki/index.php?title=Arduino_Motor_Shield_%28L298N%29_%28SKU:DRI0009%29))
* [Lectura de humedad del suelo](https://github.com/Seeed-Studio/Moisture_Sensor) Este sensor tendremos que calibrarlo en el terreno donde lo vamos a usar para saber los valores que indican que el mismo está seco o húmedo. Para probar podemos tocarlo con los dedos secos, húmedos o con un cleenex  mojado.

* [Activación de bomba con relé](http://bocoup.com/weblog/javascript-relay-with-johnny-five/)

* Lectura de temperatura y humedad

[Proyecto de riego con sensores](http://www.instructables.com/id/WATERING-SYSTEM-INTRODUCTION/)

## Librerías

* [DHT22](https://github.com/Seeed-Studio/Grove_Temperature_And_Humidity_Sensor) 
* El sensor de humedad de suelo no necesita librería, basta con hacer un analogRead del pin analógico donde está conectado.

