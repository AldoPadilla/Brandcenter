#define POTENTIOMETER 0  // Physical pin 13 = tiny24 pin (D  0)

int potValue = 0;

void setup(){
Serial.begin(9600);
}

void loop(){
    potValue = analogRead(POTENTIOMETER);

  Serial.println(potValue);

}
