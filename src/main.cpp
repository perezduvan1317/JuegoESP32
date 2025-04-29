#include "definiciones.h"

void setup() {
  Serial2.begin(9600, SERIAL_8N1, RXD2, TXD2);
  Wire.begin();
  rtc.begin();
}

void loop() {
  // Detectar tecla
  char tecla = teclado.getKey();
  if (tecla) {
    DateTime now = rtc.now();
    // Enviar todo como un paquete separado por "|"
    Serial2.print("KEY|");
    Serial2.print(tecla);
    Serial2.print("|");
    Serial2.print(now.day());
    Serial2.print("/");
    Serial2.print(now.month());
    Serial2.print("/");
    Serial2.print(now.year());
    Serial2.print(" ");
    Serial2.print(now.hour());
    Serial2.print(":");
    Serial2.print(now.minute());
    Serial2.print(":");
    Serial2.println(now.second());
  }
}
