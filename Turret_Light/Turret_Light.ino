#include <Servo.h> 
 
Servo myservo; 
#define leftPin 2
#define rightPin 3

#define LED 13 
#define GUN 4

#define POTENTIOMETER 0

int potValue = 0;
int pos = 90;
int delayPeriod = 50;  // increasing this slows down the servo movement

 
 
void setup() 
{ 
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object 
  myservo.write(pos); // center the servo
  pinMode(leftPin, HIGH);   // turn on pullup resistors
  pinMode(rightPin, HIGH);
  pinMode(GUN, INPUT);
  pinMode(POTENTIOMETER, INPUT);
  Serial.begin(9600);
} 
 
 
void loop() 
{ 
  
  if(digitalRead(GUN) == HIGH)  {
    fire();
  }else{
  analogWrite(LED,LOW);
  }


  if(digitalRead(leftPin) == LOW)  
  {                              
   // in steps of 1 degree 
   if( pos > 0)
      --pos;
    myservo.write(pos);              // tell servo to go to position in variable 'pos' 
    delay(delayPeriod);                      
  } 
  if(digitalRead(rightPin) == LOW)  
  {                              
   if( pos < 180)
       ++pos;
    myservo.write(pos);              // tell servo to go to position in variable 'pos' 
    delay(delayPeriod);        
  }
}

void fire(){
  potValue = analogRead(POTENTIOMETER);

  digitalWrite(LED, HIGH);  
  delay(potValue);
  digitalWrite(LED, LOW);  
  delay(potValue);
  return;
}
