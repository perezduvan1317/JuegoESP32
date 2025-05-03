#include "definiciones.h"

String comando = "";

void setup() {
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  Serial.begin(115200);
  Serial2.begin(9600, SERIAL_8N1, RXD2, TXD2);
  Wire.begin();
  rtc.begin();
  motor.setSpeed(10);

  //rtc.adjust(DateTime(2025, 4, 29, 20, 23, 0));  // Año, Mes, Día, Hora, Minuto, Segundo
}

String HOLA = "GET_DATE";

void procesarComando(String cmd) {
  if (cmd == "GET_DATE") {
    
  }
}

void loop() {
  /*
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
    byte c = Serial2.read();
    if (c == 0x7E) {
      DateTime now = rtc.now();
      byte dia = now.day();
      Serial2.write(dia);  // Enviar como byte binario
      Serial.println(dia);
    }
  }

*/
  for (int paso = 0; paso < 8; paso++) {
    for (int pin = 0; pin < 4; pin++) {
      digitalWrite(pines[pin], secuencia[paso][pin]);
    }
    delay(2);  // Ajusta esto si va muy rápido o muy lento
  }
  delay(5000);
}
