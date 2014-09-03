#define POTENTIOMETER 0  // Physical pin 13 = tiny24 pin (D  0)
#define LED 13    // Physical pin 7 = tiny24 pin (D  6)

int potValue = 0;

void setup() {
  pinMode(LED, OUTPUT);
  Serial.begin(9600);

}


void loop() {
  potValue = analogRead(POTENTIOMETER);
    Serial.println(potValue);


    analogWrite(LED, 128);   // turn the LED on (HIGH is the voltage level)
    delay(potValue);
  digitalWrite(LED, LOW);    // turn the LED off by making the voltage LOW
    delay(potValue);

}
