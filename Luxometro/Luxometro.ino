/****************************************************************************************
 Luxómetro
  
  Programa para realizar lecturas con un sensor de luz BH1750

 Conexiones:
  ------------------------------------------------------------------------
  M. BH1750-> Arduino Uno,Nano,Mini | Arduino Mega,DUE | Arduino Leonardo
  ------------------------------------------------------------------------
  VCC      ->   5V                  |   5V             |   5V
  GND      ->   GND                 |   GND            |   GND
  SCL      ->   A5                  |   21             |   3
  SDA      ->   A4                  |   20             |   2 
  ADRR     ->   NC                  |   NC             |   NC
  ------------------------------------------------------------------------
  *No se puede cambiar de pines, los pines indicados son para la comunicación I2C 
   y son los pines SDA y SCL de cada placa respectivamente

 Dirección del módulo I2C
  a)Para ADRR no conectado o conectado a GND la dirección I2C es 0x23 
  b)Para ADRR conectado a VCC la dirección I2C es 0x5C 
 
 Programa basado en el ejemplo BH1750test de la librería BH1750
 
 Última modificación el 30/08/2020

 Más información en:
   -https://naylampmechatronics.com/blog/44_Tutorial-m%C3%B3dulo-sensor-de-luz-BH1750.html
   -https://github.com/naylampmechatronics/Ejemplos_BH1750

**************************************************************************************************/
#include <Wire.h>
#include <BH1750.h>

BH1750 Luxometro(0x23); //para una dirección i2C de 0x23

void setup(){
  Serial.begin(9600);
  Serial.println("Inicializando sensor...");
  Luxometro.begin(BH1750::CONTINUOUS_HIGH_RES_MODE); //inicializamos el sensor
}


void loop() {
  uint16_t lux = Luxometro.readLightLevel();//Realizamos una lectura del sensor
  Serial.print("Luz(iluminancia):  ");
  Serial.print(lux);
  Serial.println(" lx");
  delay(500);
}
