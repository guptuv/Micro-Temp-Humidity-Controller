#include <DHT.h>
#include <Adafruit_GFX.h>
#include <Wire.h>
#include <Adafruit_SSD1306.h>
#define screen_width 128
#define screen_height 64
Adafruit_SSD1306 display(screen_width,screen_height);
#define DHTPIN 4  
#define DHTTYPE DHT11 
DHT dht(DHTPIN, DHTTYPE);
void setup() 
{ 
  display.begin(SSD1306_SWITCHCAPVCC,0X3C);
  display.clearDisplay();
  display.display();
  display.setCursor(0,2);
  display.setTextSize(1.8);
  display.setTextColor(SSD1306_WHITE);
  display.print("Hi");
  delay(200);
  pinMode(13,OUTPUT);
  Serial.begin(9600);
  Serial.println("Temperature and Humidity Sensor by Yuvraj Gupta BT22MEC106");
  dht.begin();
  display.display();


}

void loop()
 {
  
  float c = dht.readTemperature();
  float h = dht.readHumidity();
  float f=(9*c)/5.0 + 32;
 
  
  if (isnan(h) || isnan(c))
  {
   Serial.print("Device NOT Working properly");
   Serial.print("    Device is Connected for  ");
   Serial.print(millis()/1000.0);
   Serial.println(" seconds");
  }
  else
  {
    Serial.print("Device is working Properly");
    Serial.print("    Device is Connected for  ");
    Serial.print(millis()/1000.0);
    Serial.println(" seconds");
  }
  digitalWrite(13,HIGH);
  delay(1000);
  display.clearDisplay();
  display.display();
  display.setCursor(0,15);
  display.setTextSize(1);
  display.setTextColor(SSD1306_WHITE);
  display.println("Temperature");
  display.print(c);
  display.println("C ");
  display.print(f);
  display.println("F");
  display.setCursor(0,40);
  display.println("-------");
  display.println("Humidity");
  display.print(h);
  display.print(" %");
  display.display();
  
  
  delay(1000);
  digitalWrite(13,LOW);
  delay(1000);
  
 }
 // made by Yuvraj gupta Bt22mec106 9472107621 only 1 person grp
//Yuvraj Gupta
 