# Ejemplos_BH1750
Códigos de ejemplo para el módulo sensor de luz BH1750

![Módulo Sensor de Luz digital BH1750](https://naylampmechatronics.com/170-large_default/modulo-sensor-de-luz-digital-bh1750.jpg)

Información detallada de los ejemplos en: [Tutorial sensor de luz BH1750](https://naylampmechatronics.com/blog/44_Tutorial-m%C3%B3dulo-sensor-de-luz-BH1750.html)

## Contenido
* **Luxometro:** Programa para realizar lecturas con un sensor de luz BH1750
* **LuzAtomatica:** Activa o desactiva una salida digital (Led, Relay, etc) dependiendo del nivel de intensidad de luz presente en el sensor.

## Requerimientos
 **Software**
  * IDE Arduino
  * Librería  [Wire](https://www.arduino.cc/en/Reference/Wire) (Ya viene instalada en Arduino)
  * Librería  [BH1750](https://github.com/claws/BH1750) de Christopher Laws
  
 **Hardware**
  * [Arduino Uno](https://naylampmechatronics.com/arduino-tarjetas/8-arduino-uno-r3.html) (o cualquier modelo)
  * [Módulo Sensor de Luz digital BH1750](https://naylampmechatronics.com/sensores-luz-y-sonido/76-modulo-sensor-de-luz-digital-bh1750.html) 
  
## Conexiones
  
  Módulo BH1750| Arduino Uno,Nano,Mini | Arduino Mega,DUE | Arduino Leonardo
  ---------|-----------------------|------------------|----------------------
  VCC      |   5V                  |   5V             |   5V
  GND      |   GND                 |   GND            |   GND
  SCL      |   A5                  |   21             |   3
  SDA      |   A4                  |   20             |   2 
  ADRR     |   NC                  |   NC             |   NC
   
No se puede cambiar de pines, los pines indicados son para la comunicación I2C 
   y son los pines SDA y SCL de cada placa respectivamente

## Dirección del módulo I2C
Dependiendo del pin ADRR podemos trabajar con una de las dos siguientes direcciones:
  * Para ADRR no conectado o conectado a GND la dirección I2C es 0x23 
  * Para ADRR conectado a VCC la dirección I2C es 0x5C 

## Licencia
Los ejemplos son Open Source, desarrollados por el equipo de Naylamp Mechatronics bajo [licencia MIT](LICENSE)
 
## Links 
 * [Tutorial sensor de luz BH1750](https://naylampmechatronics.com/blog/44_Tutorial-m%C3%B3dulo-sensor-de-luz-BH1750.html)
 * [Módulo Sensor de Luz digital BH1750](https://naylampmechatronics.com/sensores-luz-y-sonido/76-modulo-sensor-de-luz-digital-bh1750.html)
 * [Librería BH1750](https://github.com/claws/BH1750)
