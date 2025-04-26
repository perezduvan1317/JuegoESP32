/*

#include <Arduino.h>
#include <LiquidCrystal_I2C.h>

#ifndef DEFINICIONES_H

#define DEFINICIONES_H

#define I2C_SDA 21
#define I2C_SCL 22

#define pGreen      12 
#define pWhite      27
#define pYellow     32
#define pBlue       04
#define pRed        26

#define lGreen      13 
#define lWhite      14
#define lYellow     33
#define lBlue       15
#define lRed        25

volatile int contador = 0;

hw_timer_t * timer = NULL;
portMUX_TYPE timerMux = portMUX_INITIALIZER_UNLOCKED;

LiquidCrystal_I2C lcd(0x27, 20, 4);

#define LedGreenON      digitalWrite(lGreen, HIGH)
#define LedGreenOFF     digitalWrite(lGreen, LOW)
#define LedWhiteON      digitalWrite(lWhite, HIGH)
#define LedWhiteOFF     digitalWrite(lWhite, LOW)
#define LedYellowON     digitalWrite(lYellow, HIGH)
#define LedYellowOFF    digitalWrite(lYellow, LOW)
#define LedBlueON       digitalWrite(lBlue, HIGH)
#define LedBlueOFF      digitalWrite(lBlue, LOW)
#define LedRedON        digitalWrite(lRed, HIGH)
#define LedRedOFF       digitalWrite(lRed, LOW)

#endif

*/