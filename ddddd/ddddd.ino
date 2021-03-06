#include <SHT1x.h>


#define dataPin  20
#define clockPin 21
SHT1x sht1x(dataPin, clockPin);

void setup()
{
   Serial.begin(115200); // Open serial connection to report values to host
   Serial.println("Starting up");
}

void loop()
{
  float temp_c;
 
  float humidity;

  // Read values from the sensor
  temp_c = sht1x.readTemperatureC();

  humidity = sht1x.readHumidity();

  // Print the values to the serial port
  Serial.print("Temperature: ");
  Serial.print(temp_c, DEC);
  Serial.print("C / ");
  Serial.print(humidity);
  Serial.println("%");

  delay(2000);
}
