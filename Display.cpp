#include "Display.h"

//Función para configurar el display de 7 segmentos
void configDisplay7(void){
    //Pines del display de salida
    pinMode(dA, OUTPUT);
    pinMode(dB, OUTPUT);
    pinMode(dC, OUTPUT);
    pinMode(dD, OUTPUT);
    pinMode(dE, OUTPUT);
    pinMode(dF, OUTPUT);
    pinMode(dG, OUTPUT);
    pinMode(dP, OUTPUT);
    
    apagarDisplay7();
}

//Para ánodo común, si fuera cátodo sería LOW
void apagarDisplay7(void){
    digitalWrite(dA, SEG_OFF);
    digitalWrite(dB, SEG_OFF);
    digitalWrite(dC, SEG_OFF);
    digitalWrite(dD, SEG_OFF);
    digitalWrite(dE, SEG_OFF);
    digitalWrite(dF, SEG_OFF);
    digitalWrite(dG, SEG_OFF);
    digitalWrite(dP, SEG_OFF);
}


//Función para desplegar números en display de 7 segmentos
void desplegarNumero(uint8_t numero){
    switch (numero){
        case 0: 
            digitalWrite(dA,SEG_ON); 
            digitalWrite(dB,SEG_ON); 
            digitalWrite(dC,SEG_ON); 
            digitalWrite(dD,SEG_ON); 
            digitalWrite(dE,SEG_ON); 
            digitalWrite(dF,SEG_ON); 
            digitalWrite(dG,SEG_OFF); 
            break;
        case 1: 
            digitalWrite(dA,SEG_OFF); 
            digitalWrite(dB,SEG_ON); 
            digitalWrite(dC,SEG_ON); 
            digitalWrite(dD,SEG_OFF); 
            digitalWrite(dE,SEG_OFF); 
            digitalWrite(dF,SEG_OFF); 
            digitalWrite(dG,SEG_OFF); 
            break;
        case 2: 
            digitalWrite(dA,SEG_ON); 
            digitalWrite(dB,SEG_ON); 
            digitalWrite(dC,SEG_OFF); 
            digitalWrite(dD,SEG_ON); 
            digitalWrite(dE,SEG_ON); 
            digitalWrite(dF,SEG_OFF); 
            digitalWrite(dG,SEG_ON); 
            break;
        case 3: 
            digitalWrite(dA,SEG_ON); 
            digitalWrite(dB,SEG_ON); 
            digitalWrite(dC,SEG_ON); 
            digitalWrite(dD,SEG_ON); 
            digitalWrite(dE,SEG_OFF); 
            digitalWrite(dF,SEG_OFF); 
            digitalWrite(dG,SEG_ON); 
            break;
        case 4: 
            digitalWrite(dA,SEG_OFF); 
            digitalWrite(dB,SEG_ON); 
            digitalWrite(dC,SEG_ON); 
            digitalWrite(dD,SEG_OFF); 
            digitalWrite(dE,SEG_OFF); 
            digitalWrite(dF,SEG_ON); 
            digitalWrite(dG,SEG_ON); 
            break;
        case 5: 
            digitalWrite(dA,SEG_ON); 
            digitalWrite(dB,SEG_OFF); 
            digitalWrite(dC,SEG_ON); 
            digitalWrite(dD,SEG_ON); 
            digitalWrite(dE,SEG_OFF); 
            digitalWrite(dF,SEG_ON); 
            digitalWrite(dG,SEG_ON); 
            break;
        case 6: 
            digitalWrite(dA,SEG_ON); 
            digitalWrite(dB,SEG_OFF); 
            digitalWrite(dC,SEG_ON); 
            digitalWrite(dD,SEG_ON); 
            digitalWrite(dE,SEG_ON); 
            digitalWrite(dF,SEG_ON); 
            digitalWrite(dG,SEG_ON); 
            break;
        case 7: 
            digitalWrite(dA,SEG_ON); 
            digitalWrite(dB,SEG_ON); 
            digitalWrite(dC,SEG_ON); 
            digitalWrite(dD,SEG_OFF); 
            digitalWrite(dE,SEG_OFF); 
            digitalWrite(dF,SEG_OFF); 
            digitalWrite(dG,SEG_OFF); 
            break;
        case 8: 
            digitalWrite(dA,SEG_ON); 
            digitalWrite(dB,SEG_ON); 
            digitalWrite(dC,SEG_ON); 
            digitalWrite(dD,SEG_ON); 
            digitalWrite(dE,SEG_ON); 
            digitalWrite(dF,SEG_ON); 
            digitalWrite(dG,SEG_ON); 
            break;
        case 9: 
            digitalWrite(dA,SEG_ON); 
            digitalWrite(dB,SEG_ON); 
            digitalWrite(dC,SEG_ON); 
            digitalWrite(dD,SEG_ON); 
            digitalWrite(dE,SEG_OFF); 
            digitalWrite(dF,SEG_ON); 
            digitalWrite(dG,SEG_ON); 
            break;
        default: 
            apagarDisplay7(); 
            break;
    }
}

//Función para desplegar punto (1 se despliega, 0 no se despliega)
void desplegarPunto(uint8_t punto){
    if (punto==1){
        digitalWrite(dP, SEG_ON);
    }
    else if (punto==0){
        digitalWrite(dP, SEG_OFF);
    }
}
