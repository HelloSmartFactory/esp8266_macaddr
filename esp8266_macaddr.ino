#include <ESP8266WiFi.h>

void setup() {
  Serial.begin(115200);  
  Serial.println();
  Serial.print("ESP8266 MACaddress : ");
  Serial.println(WiFi.macAddress());
}

void loop() {
  // put your main code here, to run repeatedly:

}
