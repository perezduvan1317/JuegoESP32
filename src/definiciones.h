#include <Arduino.h>
#include <Keypad.h>
#include <Wire.h>
#include <RTClib.h>

#ifndef DEFINICIONES_H

#define DEFINICIONES_H

#define I2C_SDA 21
#define I2C_SCL 22
#define RXD2 16  // RX de esta ESP (no conectado si solo transmite)
#define TXD2 17  // TX hacia la ESP principal


const byte NUM_FILAS = 4;
const byte NUM_COLUMNAS = 4;

// Definimos el mapa de teclas
char teclas[NUM_FILAS][NUM_COLUMNAS] = {
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};

// Pines que conectan las filas y columnas
byte pinesFilas[NUM_FILAS] = {22, 5, 18, 19};
byte pinesColumnas[NUM_COLUMNAS] = {15, 4, 13, 21};

// Creamos el objeto Keypad
Keypad teclado = Keypad(makeKeymap(teclas), pinesFilas, pinesColumnas, NUM_FILAS, NUM_COLUMNAS);
RTC_DS3231 rtc;

#endif
/*







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



*/