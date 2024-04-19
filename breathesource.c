#include <WiFi.h>    
#include <HTTPClient.h>
#include <UrlEncode.h>
int sensorValue;
int digitalValue;

const char* ssid = "JioFiber-Aj5ca";
const char* password = "ABC123456";

String phoneNumber = "+9185856338";
String apiKey = "6395251";

void sendMessage(String message){

  // Data to send with HTTP POST
  String url = "https://api.callmebot.com/whatsapp.php?phone=" + phoneNumber + "&apikey=" + apiKey + "&text=" + urlEncode(message);    
  HTTPClient http;
  http.begin(url);

  // Specify content-type header
  http.addHeader("Content-Type", "application/x-www-form-urlencoded");
  
  // Send HTTP POST request
  int httpResponseCode = http.POST(url);
  if (httpResponseCode == 200){
    Serial.print("Message sent successfully");
  }
  else{
    Serial.println("Error sending the message");
    Serial.print("HTTP response code: ");
    Serial.println(httpResponseCode);
  }

  // Free resources
  http.end();
}

void setup() {
  Serial.begin(115200);
  
  pinMode(13, OUTPUT);
  pinMode(2, INPUT);

  WiFi.begin(ssid, password);
  Serial.println("Connecting");
  while(WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("");
  Serial.print("Connected to WiFi network with IP Address: ");
  Serial.println(WiFi.localIP());

  // Send Message to WhatsAPP
  sendMessage("HI , i am ur frnd");

}

void loop() {
  sensorValue = analogRead(0); // read analog input pin 0
  digitalValue = digitalRead(2);
  if (sensorValue > 400)
  {
    sendMessage("Air quality is bad");
    sendMessage("wear your mask");
  }
  else
    sendMessage("air quality is good");
  Serial.println(sensorValue, DEC); // prints the value read
  Serial.println(digitalValue, DEC);
  delay(1000); // wait 100ms for next reading
}
