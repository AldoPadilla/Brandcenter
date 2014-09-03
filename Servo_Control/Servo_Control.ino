#define POTENTIOMETER 0  // Physical pin 13 = tiny24 pin (D  0)
#define LED 9    // Physical pin 7 = tiny24 pin (D  6)

float potValue = 0.0;
int brightness = 0;

void setup() {
  pinMode(LED, OUTPUT);
  Serial.begin(9600);

}


void loop() {
  potValue = analogRead(POTENTIOMETER)/1023.0;
    Serial.println(potValue);
  brightness = round(potValue * 255.0);
    Serial.println(brightness);
    
    analogWrite(LED, brightness);   // turn the LED on (HIGH is the voltage level)

  delay(30);
  


}
