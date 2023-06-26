#include <WiFi.h>
#include "ThingSpeak.h" // always include thingspeak header file after other header files and custom macros

char ssid[] = "toor";   // your network SSID (name) 
char pass[] = "123456789";   // your network password
int keyIndex = 0;    
float calibration = 0.36;        // calibration
WiFiClient  client;

unsigned long myChannelNumber = 2203604;
const char * myWriteAPIKey = "AF0JH0ASCTMG3ZES";
int number = 0;

int analogPin = 35;
float sensorValue;
float voltage;

void setup() 
{
  Serial.begin(115200);  //Initialize serial
  Serial.println("Connecting to ");
  Serial.println(ssid);
  WiFi.begin(ssid, pass);
 
  while (WiFi.status() != WL_CONNECTED)
  {
    delay(100);
    Serial.print("*");
  }
  Serial.println("");
  Serial.println("WiFi connected");
}
  
void loop(){
  sensorValue = 0;
  voltage = 0;
  sensorValue = analogRead(analogPin);
  voltage = (((sensorValue * 3.3) / 1024) * 2 + calibration); //multiply by two as voltage divider network is 100K & 100K Resistor

 
  
  Serial.print("Analog Value = ");
  Serial.print(sensorValue);
  Serial.print("\t Output Voltage = ");
  Serial.print(voltage);
 
  int x = ThingSpeak.writeField(myChannelNumber, 1, sensorValue, myWriteAPIKey);
  if(x == 200){
    Serial.println("Channel update successful.");
  }else{
    Serial.println("Problem updating channel. HTTP error code " + String(x));
  }
  
  delay(20000); // Wait 20 seconds to update the channel again
}