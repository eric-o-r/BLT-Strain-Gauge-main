#include <Arduino.h>
int sensorValue = analogRead(A0);
int sensorValue2 = analogRead(A1);
int sensorValue3 = analogRead(A2);

void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  
}
// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  int sensorValue = analogRead(A0);
   int sensorValue2 = analogRead(A1);
   int sensorValue3 = analogRead(A2);
  // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
  float voltage = sensorValue * (5.0 / 1023.0);
   float voltage2 = sensorValue2 * (5.0 / 1023.0);
      float voltage3 = sensorValue3 * (5.0 / 1023.0);

// Measures voltage across bridge
Serial.print(" Voltage difference: ");
  Serial.print(voltage2-voltage);
  delay(1000);
  //Measures amplified voltage from operatiom amplifier
Serial.print(" Voltage difference with Op Amp: ");
  Serial.print(voltage3);
  delay(1000);
  Serial.println();

  // Math to obtain the resistance from the change in voltage measured above
//Rx = (R3/(Vg/Vin - R1/R1+R2)) - R3


//Place holder code for the formula to obtain strain from change in resistance  measured above
//strain = ((Rx - defualt R of strain gauge)/Default R of gauge) / gage factor
}
