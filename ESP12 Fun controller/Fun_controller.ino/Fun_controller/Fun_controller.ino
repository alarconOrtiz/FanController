#include <FS.h>

#include "config.h"
#include <ESP8266WiFi.h>
#include <ESPAsyncWebServer.h>

AsyncWebServer server(80);


void setup(void) 
{
  bool statusLitt = SPIFFS.begin();
  
  Serial.begin(115200);
  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);
  Serial.println("");
  Serial.println("status littleFS ");
  Serial.println (statusLitt?"High":"Lows");
  Serial.print("Connecting to ");
  Serial.println(ssid);

  // Wait for connection
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println(WiFi.status());
  }
  Serial.println("");
  Serial.print("Connected to ");
  Serial.println(ssid);
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP()); 

  server.serveStatic("/", SPIFFS , "/").setDefaultFile("index.html");
   
   server.on("/hello", HTTP_GET, [](AsyncWebServerRequest *request) {
      request->send(200, "text/plain", "Hola mundo (desde ESP8266)");
   });
 
   server.onNotFound([](AsyncWebServerRequest *request) {
      request->send(400, "text/plain", "Not found");
   });
 
   server.begin();
   Serial.println("HTTP server started");
}

void loop(void) 
{

}
