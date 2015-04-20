## Escritura en tarjeta

* Aprender a escribir ficheros
* Recupera el contenido en el ordenador

### Problemas con las tarjetas

* Las tarjetas SD son enórmemente sensibles, si se produce un error puede que haya que volver a formatearlas. 
* Se deben formatear siempre en FAT32
* Las tarjetas más antiguas suelen funcionar mejor porque utilizan menores velocidades
* Dado que es posible que se produzcan errores de acceso o de escritura, nuestro programa siempre contemplará esa posibilidad, realizando el resto de tareas en caso de error. (ver el ejemplo Datalogger de la librería SD para el tratamiento de errores). En general se tratará así:

	if(ErrorDeAcceso)
	{
		Serial.println("Error de acceso a SD");
	}
	else
	{
		// Escritura a SD
	}

### Libreria SD

* [Librería](http://arduino.cc/en/Reference/SD)
* [Ejemplo](https://github.com/sparkfun/microSD_Shield/blob/V_1.4/Firmware/SD_Datalogger/SD_Datalogger.ino)

## Alimentación solar

Se ha renunciado al uso de energía solar porque se requería de una batería y paneles de excesivo tamaño. (ver ejemplo)

## Programación

Se ha proporcionado al menos un ejemplo para cada uno de los sensores, con lo que se puede crear el programa final uniendo estos ejemplos.

Para hacer esto hay que tener cuidado ...
* de que no existan variables duplicadas
* se recomienda tomar como base el ejemplo mayor e irle añadiendo el código de los restantes
* unir los #includes iniciales al principio del programa final
* juntar las variables globales
* añadir todo los códigos del método setup() al del programa final. Para ello se puede crear una función setup_ejemplo1() y desde la función setup llamarlas a todas
* añadir todo el código de los métodos loop() al programa final, creando funciones loop_ejemplo1(), con lo que bastará llamar a estos métodos desde el loop del programa completo.
* Hay que tener cuidado si hay muchos delay, porque podría ocurrir que la ejecución del programa final fuera muuuuy lenta.