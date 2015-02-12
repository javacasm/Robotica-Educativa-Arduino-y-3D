# Robot móvil

![robot](http://letsmakerobots.com/files/field_primary_image/20130328_163935.jpg)

## Descripción

Robot móvil: Un sencillo robot móvil, con 2 motores y ruedas, dotado de sensores de distancia podrá realizar un mapa de la zona en la que se encuentra, detectando y evitando obtáculos en su camino. Los datos del movimiento se almacenan en un tarjeta SD para su posterior análisis. Se incluye un panel solar para aumentar su autonomía.

## Componentes

* Motores 
![motor](http://www.electan.com/product_thumb.php?img=images/Pololu/0J1093.jpg&w=320&h=240)

* Control de motores [pagina](http://www.dfrobot.com/wiki/index.php?title=Arduino_Motor_Shield_(L298N)_(SKU:DRI0009))
![control](http://www.dfrobot.com/wiki/images/1/1e/Arduino_Shield3.png)

* Sensor de ultrasonidos [página](http://www.seeedstudio.com/wiki/index.php?title=Ultra_Sonic_range_measurement_module)

## Modelo

Me gustaría basarme en [este modelo](http://www.thingiverse.com/thing:200582) pero añadiendo la posibilidad de mover el sensor de ultrasonidos con un servo 
Habría que añadir un pequeño soporte para el panel solar

## Ejemplos:

* [Accionamiento de motores](http://www.dfrobot.com/wiki/index.php?title=Arduino_Motor_Shield_(L298N)_(SKU:DRI0009)#Sample_Code)
* [Detección de obstáculos](http://www.seeedstudio.com/wiki/index.php?title=Ultra_Sonic_range_measurement_module#Programming)
* Cálculo de distancias

## Librerías

* Motor
* Ping (sensor de ultrasonidos)

