#ifndef __DISPLAY7_H__
#define __DISPLAY7_H__

//Librerías a utilizar
#include <Arduino.h>
#include <stdint.h>

//Segmentos del display
#define dA 13
#define dB 27
#define dC 16
#define dD 18
#define dE 25
#define dF 33
#define dG 23
#define dP 17 //Punto decimal 

#define SEG_ON LOW //display de ánodo común, enciende en low
#define SEG_OFF HIGH

//Función para configurar el display de 7 segmentos
void configDisplay7(void);

//Función para desplegar números en display de 7 segmentos
void desplegarNumero(uint8_t numero);

//Función para desplegar punto (1 se despliega, 0 no se despliega)
void desplegarPunto(uint8_t punto);

//Función para apagar todo
void apagarDisplay7(void);

#endif //__DISPLAY7_H__
