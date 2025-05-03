#include <Arduino.h>
#include <Keypad.h>
#include <Wire.h>
#include <RTClib.h>
#include <Stepper.h>

#ifndef DEFINICIONES_H

#define DEFINICIONES_H

#define I2C_SDA 21
#define I2C_SCL 22
#define RXD2 16 // RX de esta ESP (no conectado si solo transmite)
#define TXD2 17 // TX hacia la ESP principal

#define IN1 27
#define IN2 26
#define IN3 25
#define IN4 33

int pines[4] = {27, 26, 25, 33};  // IN1 a IN4

int secuencia[8][4] = {
  {1, 0, 0, 0},
  {1, 1, 0, 0},
  {0, 1, 0, 0},
  {0, 1, 1, 0},
  {0, 0, 1, 0},
  {0, 0, 1, 1},
  {0, 0, 0, 1},
  {1, 0, 0, 1}
};

// Define el número de pasos por vuelta del 28BYJ-48
const int pasosPorVuelta = 2048;

Stepper motor(pasosPorVuelta, IN1, IN2, IN3, IN4);

const byte NUM_FILAS = 4;
const byte NUM_COLUMNAS = 4;

// Definimos el mapa de teclas
char teclas[NUM_FILAS][NUM_COLUMNAS] = {
    {'1', '2', '3', 'A'},
    {'4', '5', '6', 'B'},
    {'7', '8', '9', 'C'},
    {'*', '0', '#', 'D'}};

// Pines que conectan las filas y columnas
byte pinesFilas[NUM_FILAS] = {14, 5, 18, 19};
byte pinesColumnas[NUM_COLUMNAS] = {15, 4, 13, 12};

// Creamos el objeto Keypad
Keypad teclado = Keypad(makeKeymap(teclas), pinesFilas, pinesColumnas, NUM_FILAS, NUM_COLUMNAS);
RTC_DS3231 rtc;

#endif
