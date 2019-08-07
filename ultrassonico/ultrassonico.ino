#include <Ultrasonic.h>


#define trigPin 12
#define echoPin 13

Ultrasonic ultrasonic(trigPin,echoPin);

void setup() {
  
  Serial.begin(9600);
  Serial.println("Reading...");
 

}

void loop() {
  
   //Le as informacoes do sensor, em cm e pol
  float cmMsec, inMsec;
  long microsec = ultrasonic.timing();
  cmMsec = ultrasonic.convert(microsec, Ultrasonic::CM);
  inMsec = ultrasonic.convert(microsec, Ultrasonic::IN);
  //Exibe informacoes no serial monitor
  Serial.print("Distancia em cm: ");
  Serial.print(cmMsec);
  Serial.print(" - Distancia em polegadas: ");
  Serial.println(inMsec);
  delay(1000);

}
