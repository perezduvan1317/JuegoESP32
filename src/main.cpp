#include <Arduino.h>
#include <Keypad.h>

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

void setup() {
  Serial.begin(115200);
  Serial.println("Teclado 4x4 listo con librería Keypad");
}

void loop() {
  char tecla = teclado.getKey();

  if (tecla) {
    Serial.print("Tecla presionada: ");
    Serial.println(tecla);
  }
}
