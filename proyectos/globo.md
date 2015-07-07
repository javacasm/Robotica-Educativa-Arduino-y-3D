# Globo sonda/Estación meteorológica

![globo](http://arielwaldman.com/wp-content/2010/03/6331-239861690014-774155014-8379928-4367982-n.jpg)

### Descripción

Globo sonda/estación meteorológica: Se medirán y registrarán variables meteorológicas: temperatura, humedad ambiental y presión atmósférica junto a la posición por medio d un gps y el movimiento con un acelerómetro  lo que nos permite saber el movimiento que realiza en su vuelo. Los datos se guardan en una tarjeta SD de formato micro que puede ser leída desde un ordenador donde se podrán analizar con posterioridad. 

El implementar el globo sonda tiene algunas complejidades añadidas:

* Es necesario solicitar un permiso especial para su lanzamiento
* Infraentructura tecnica como es el globo, el gas, una caja antigolpes, paracaidas y la recuperación de los componentes

Una posibilidad es utilizarlo en una cometa. Habría que protegerlo ante caidas con una caja de poliestireno (o similar) y/o un paracaidas.

## Objetivos

* Leer los distintos sensores y el GPS. 
* Los datos siempre que sea posible se guardarán en la tarjeta.

## Ejemplos de proyectos

### Granabot

[Lista de componentes](http://granabot.es/globo-sonda-componentes-y-presupuesto/)
[programación](http://granabot.es/globo-sonda-programacion-en-arduino/)

### Chasat

[blot](http://chasat.blogspot.com.es/)

### Sparkfun

[proyecto](https://www.sparkfun.com/tutorials/180)

## Componentes

* GPS [Página del producto](https://www.sparkfun.com/products/11058) [detalles](https://github.com/sparkfun/Venus_GPS_SMA_Connector/tree/V_2.1 )[GPS](http://www.electan.com/product_thumb.php?img=images/09133-01.jpg&w=320&h=240) 
* Barómetro [página del producto](http://www.seeedstudio.com/wiki/Grove_-_Barometer_Sensor) 
![barómetro](http://www.seeedstudio.com/wiki/images/thumb/e/e7/Grove-Barometer.jpg/300px-Grove-Barometer.jpg) ([librería](http://www.seeedstudio.com/wiki/images/e/e8/Barometer_Sensor.zip)
* Sensor de temperatura y humedad [producto](http://www.seeedstudio.com/wiki/Grove_-_Temperature_and_Humidity_Sensor_Pro)
![sensor](http://www.seeedstudio.com/wiki/images/thumb/d/d1/Temp_humi_pro.jpg/400px-Temp_humi_pro.jpg)
* Acelerómetro [pagina](https://www.sparkfun.com/products/9269)
![acelerometro](https://cdn.sparkfun.com//assets/parts/2/7/6/8/09269-01.jpg) (no necesita librería puesto que sólo hay que leer valores analógicos)

## Modelo

[Caja ventilada](http://www.thingiverse.com/thing:304617)
[Arduino box](http://www.thingiverse.com/thing:13931) Habrá que modificar las dimensiones y la posición de la tarjeta

[Alternativas](http://www.thingiverse.com/javacasm/collections/caja-arduino)

[sensores](http://www.thingiverse.com/javacasm/collections/sensores)

## Ejemplos:

* GPS [Guia](http://www.doctormonk.com/2012/05/sparkfun-venus-gps-and-arduino.html) [Comandos](http://dlnmh9ip6v2uc.cloudfront.net/datasheets/Sensors/GPS/Venus/638/doc/AN0008_v1.4.11-datalogging.pdf)
[Tutorial GPS](http://playground.arduino.cc/Tutorials/GPS)
* Lectura de humedad del suelo
* Lectura de temperatura y humedad
* [Acelerómetro](https://github.com/sparkfun/ADXL335_Breakout)

## Librerías

* SD
* [DHT22](https://github.com/Seeed-Studio/Grove_Temperature_And_Humidity_Sensor) 
* Sensor de presión
* GPS
* [Acelerómetro](https://github.com/sparkfun/ADXL335_Breakout)

