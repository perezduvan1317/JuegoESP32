#include "definiciones.h"

String comando = "";

void setup()
{
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  Serial.begin(115200);
  Serial2.begin(9600, SERIAL_8N1, RXD2, TXD2);
  Wire.begin();
  rtc.begin();
  motor.setSpeed(10);

  // rtc.adjust(DateTime(2025, 5, 2, 21, 27, 0));  // Año, Mes, Día, Hora, Minuto, Segundo
}

String HOLA = "GET_DATE";

void procesarComando(String cmd)
{
  if (cmd == "GET_DATE")
  {
  }
}

void loop()
{

  // Detectar teclas y enviarlas
  char tecla = teclado.getKey();
  if (tecla)
  {
    Serial2.print("KEY:");
    Serial2.println(tecla);
    Serial.println(tecla);
    // procesarComando(HOLA);
  }

  // Escuchar comandos
  while (Serial2.available())
  {
    byte c = Serial2.read();
    if (c == 0x7E)
    {
      DateTime now = rtc.now();
      byte dia = now.day();
      Serial2.write(dia); // Enviar como byte binario
      Serial.println(dia);
    }
    if (c == 0x0A)
    {
      for (int paso = 0; paso < 400; paso++)
      {
        int fase = paso % 8; // Para repetir las 8 fases
        for (int i = 0; i < 4; i++)
        {
          digitalWrite(pines[i], secuencia[fase][i]);
        }
        delay(2); // Puedes ajustar la velocidad (menor = más rápido)
      }
      c = 0x00;
      Serial.println("moviendo paso a paso");
    }


    if (c == 0x01)
    {
      for (int paso = 0; paso < 463; paso++)
      {
        int fase = paso % 8; // Para repetir las 8 fases
        for (int i = 0; i < 4; i++)
        {
          digitalWrite(pines[i], secuencia[fase][i]);
        }
        delay(2); // Puedes ajustar la velocidad (menor = más rápido)
      }
      c = 0x00;
      Serial.println("moviendo paso a paso");
    }
    if (c == 0x02)
    {
      for (int paso = 0; paso < 463; paso++)
      {
        int fase = paso % 8; // Para repetir las 8 fases
        for (int i = 0; i < 4; i++)
        {
          digitalWrite(pines[i], secuencia[fase][i]);
        }
        delay(2); // Puedes ajustar la velocidad (menor = más rápido)
      }
      c = 0x00;
      Serial.println("moviendo paso a paso");
    }
    if (c == 0x03)
    {
      for (int paso = 0; paso < 463; paso++)
      {
        int fase = paso % 8; // Para repetir las 8 fases
        for (int i = 0; i < 4; i++)
        {
          digitalWrite(pines[i], secuencia[fase][i]);
        }
        delay(2); // Puedes ajustar la velocidad (menor = más rápido)
      }
      c = 0x00;
      Serial.println("moviendo paso a paso");
    }
    if (c == 0x04)
    {
      for (int paso = 0; paso < 463; paso++)
      {
        int fase = paso % 8; // Para repetir las 8 fases
        for (int i = 0; i < 4; i++)
        {
          digitalWrite(pines[i], secuencia[fase][i]);
        }
        delay(2); // Puedes ajustar la velocidad (menor = más rápido)
      }
      c = 0x00;
      Serial.println("moviendo paso a paso");
    }
    if (c == 0x05)
    {
      for (int paso = 0; paso < 463; paso++)
      {
        int fase = paso % 8; // Para repetir las 8 fases
        for (int i = 0; i < 4; i++)
        {
          digitalWrite(pines[i], secuencia[fase][i]);
        }
        delay(2); // Puedes ajustar la velocidad (menor = más rápido)
      }
      c = 0x00;
      Serial.println("moviendo paso a paso");
    }
    if (c == 0x06)
    {
      for (int paso = 0; paso < 440; paso++)
      {
        int fase = paso % 8; // Para repetir las 8 fases
        for (int i = 0; i < 4; i++)
        {
          digitalWrite(pines[i], secuencia[fase][i]);
        }
        delay(2); // Puedes ajustar la velocidad (menor = más rápido)
      }
      c = 0x00;
      Serial.println("moviendo paso a paso");
    }
    if (c == 0x07)
    {
      for (int paso = 0; paso < 463; paso++)
      {
        int fase = paso % 8; // Para repetir las 8 fases
        for (int i = 0; i < 4; i++)
        {
          digitalWrite(pines[i], secuencia[fase][i]);
        }
        delay(2); // Puedes ajustar la velocidad (menor = más rápido)
      }
      c = 0x00;
      Serial.println("moviendo paso a paso");
    }
    if (c == 0x08)
    {
      for (int paso = 0; paso < 463; paso++)
      {
        int fase = paso % 8; // Para repetir las 8 fases
        for (int i = 0; i < 4; i++)
        {
          digitalWrite(pines[i], secuencia[fase][i]);
        }
        delay(2); // Puedes ajustar la velocidad (menor = más rápido)
      }
      c = 0x00;
      Serial.println("moviendo paso a paso");
    }
  }
}
