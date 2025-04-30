#include "definiciones.h"

String comando = "";

void setup() {
  Serial.begin(115200);
  Serial2.begin(9600, SERIAL_8N1, RXD2, TXD2);
  Wire.begin();
  rtc.begin();

  //rtc.adjust(DateTime(2025, 4, 29, 20, 23, 0));  // Año, Mes, Día, Hora, Minuto, Segundo
}

String HOLA = "GET_DATE";

void procesarComando(String cmd) {
  if (cmd == "GET_DATE") {
    DateTime now = rtc.now();
    byte dia = now.day();
    Serial2.write(dia);  // Enviar como byte binario
    Serial.println(dia);
  }
}

void loop() {
  // Detectar teclas y enviarlas
  char tecla = teclado.getKey();
  if (tecla) {
    Serial2.print("KEY:");
    Serial2.println(tecla);
    Serial.println(tecla);
    //procesarComando(HOLA);
  }

  // Escuchar comandos
  while (Serial2.available()) {
    char c = Serial2.read();
    if (c == '\n') {
      procesarComando(comando);
      comando = "";
    } else {
      comando += c;
    }
  }
}
