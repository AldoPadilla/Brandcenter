int count = 0;

void setup(){
Serial.begin(9600);
}

void loop(){
  Serial.println(count);
  Serial.println("Yaaaaaa!!!!");
  count++;    //count = count +1;
}
