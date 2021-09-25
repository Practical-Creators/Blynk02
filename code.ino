//Project by - Practical Creators
//Youtube - https://youtube.com/practicalcreators

#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
char auth[] = "pPX4DvOhwPFa0bDF7rLzMWknj6FGIqsh";
char ssid[] = "ssid";
char pass[] = "password";

void setup() {
  pinMode(14, OUTPUT);
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
}

void loop() {
  Blynk.run();
}

BLYNK_WRITE(V1) {
  int data = param.asInt();
  Serial.println(data);
  tone(14, data, 2000);
}

