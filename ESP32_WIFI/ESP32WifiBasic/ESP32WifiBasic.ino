#include <WiFi.h>
#include <WebServer.h>

// SSID and password of Wifi connection:
const char* ssid = "YOUR_NETWORK_NAME";
const char* password = "YOUR_WIFI_PASSWORD";

// Port number
WebServer server(88);

String webpage_1 = "<!DOCTYPE html><html><head><title>Page Title</title></head><body style='background-color: #EEEEEE;'><span style='color: #003366;'><h1>Random number generator</h1><p>The random number is:</p>";
String webpage_2 = "</span></body></html>";
String webpage = webpage_1 + String(random(100)) + webpage_2;

int interval = 1000;
unsigned long previousMillis = 0;

void setup() {
  Serial.begin(115200);                 
 
  WiFi.begin(ssid, password);
  Serial.println("Establishing connection to WiFi with SSID: " + String(ssid));
 
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.print(".");
  }
  Serial.print("Connected to network with IP address: ");
  Serial.println(WiFi.localIP());

  server.on("/", []() {
    server.send(200, "text\html", webpage);  
  });
  server.begin();
}
 
void loop() {
  server.handleClient();
  unsigned long now = millis();
  if(now - previousMillis > interval){
    webpage = webpage_1 + String(random(100)) + webpage_2;
    previousMillis = now;
  }
}
