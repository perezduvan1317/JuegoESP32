
/*

#include "definiciones.h"

void IRAM_ATTR onTimer() {
    portENTER_CRITICAL_ISR(&timerMux);
    contador++;
    portEXIT_CRITICAL_ISR(&timerMux);
}

void initPins(){
    pinMode(pGreen, INPUT_PULLUP);
    pinMode(pWhite, INPUT_PULLUP);
    pinMode(pYellow, INPUT_PULLUP);
    pinMode(pBlue, INPUT_PULLUP);
    pinMode(pRed, INPUT_PULLUP);

    pinMode(lGreen, OUTPUT);
    pinMode(lWhite, OUTPUT);
    pinMode(lYellow, OUTPUT);
    pinMode(lBlue, OUTPUT);
    pinMode(lRed, OUTPUT);
}

void readPul(){
    if(digitalRead(pGreen) == 0){
        Serial.println("Presione Verde");
    }
    if(digitalRead(pWhite) == 0){
        Serial.println("Presione Blanco");
    }
    if(digitalRead(pYellow) == 0){
        Serial.println("Presione Amarillo");
    }
    if(digitalRead(pBlue) == 0){
        Serial.println("Presione Azul");
    }
    if(digitalRead(pRed) == 0){
        Serial.println("Presione Rojo");
    }
}

void testLeds(){
    LedGreenON;
    LedWhiteON;
    LedYellowON;
    LedBlueON;
    LedRedON;
    delay(1000);
    LedGreenOFF;
    LedWhiteOFF;
    LedYellowOFF;
    LedBlueOFF;
    LedRedOFF;
    delay(1000);
}

*/