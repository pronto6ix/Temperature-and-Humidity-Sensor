#include <dht.h>

dht DHT;

#define DHT11_PIN 7 //Analog Pin sensor connection 

void setup(){
  Serial.begin(9600);
  delay(500); //Delay to let system boot
  Serial.println("DHT11 Humidity & Temperature Sensor \n\n");
  delay(1000); //Wait before accessing Sensor
  }

void loop(){
  int chk = DHT.read11(DHT11_PIN);

    Serial.print("Current Humidity = ");
    Serial.print(DHT.humidity);
    Serial.print("%  ");
    Serial.print("Temperature = ");
    Serial.print(DHT.temperature);
    Serial.println("C ");
  delay(5000); //Wait 5 seconds before accessing Sensor again 
  
}