#include <Servo.h>  // Physical pin 13 = tiny24 pin (D  0)
#define POTENTIOMETER 0

Servo servo;

int angle;
int potValue = 0; 

void setup() {
   servo.attach(9);
   pinMode(POTENTIOMETER, INPUT);
  Serial.begin(9600);
}


void loop() {
      potValue = analogRead(POTENTIOMETER);
      angle = map(potValue, 0, 1023, 0, 179);
       
       Serial.println(angle);

      servo.write(angle);


  delay(30);

}
