/*
  LiquidCrystal Library - Hello World
 
 Demonstrates the use a 16x2 LCD display.  The LiquidCrystal
 library works with all LCD displays that are compatible with the 
 Hitachi HD44780 driver. There are many of them out there, and you
 can usually tell them by the 16-pin interface.
 
 This sketch prints "Hello World!" to the LCD
 and shows the time.
 
  The circuit:
 * LCD RS pin to digital pin 12
 * LCD Enable pin to digital pin 11
 * LCD D4 pin to digital pin 5
 * LCD D5 pin to digital pin 4
 * LCD D6 pin to digital pin 3
 * LCD D7 pin to digital pin 2
 * LCD R/W pin to ground
 * 10K resistor:
 * ends to +5V and ground
 * wiper to LCD VO pin (pin 3)
 
 Library originally added 18 Apr 2008
 by David A. Mellis
 library modified 5 Jul 2009
 by Limor Fried (http://www.ladyada.net)
 example added 9 Jul 2009
 by Tom Igoe
 modified 22 Nov 2010
 by Tom Igoe
 
 This example code is in the public domain.

 http://www.arduino.cc/en/Tutorial/LiquidCrystal
 */

// include the library code:
#include <LiquidCrystal.h>
#include <VarSpeedServo.h>

VarSpeedServo myservo; 

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

const int buttonPin = 1;     // the number of the pushbutton pin
const int ledPin =  13;      // the number of the LED pin
const int ledPin2 =  6;      // the number of the LED pin


int var = 0;

int val = 0;
int state = 0;


void setup() {
  
    myservo.attach(9);  

    // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);     
  pinMode(ledPin2, OUTPUT);      
 
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);   
  
  // set up the LCD's number of columns and rows: 
  lcd.begin(16, 2);
  // Print a message to the LCD.
}

void loop() {
  
    // read the state of the pushbutton value:
  val = digitalRead(buttonPin);

  // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH:
if (val == HIGH){         
    // turn LED on:    
    digitalWrite(ledPin, HIGH);  
    // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  delay(100);
  
  
  while(var < 30){ 
  lcd.setCursor(0, 0);
  delay(100);
  // print the number of seconds since reset:
  lcd.print("Do Jumping Jacks");
    delay(100);
  lcd.setCursor(0, 1);
  delay(100);
  // print the number of seconds since reset:
  lcd.print("Mikaila");
        var++;
    }
if (var = 20){
      myservo.write(90, 15, true);
      digitalWrite(ledPin2, HIGH);  

              }
  } 
  else {
    // turn LED off:
    digitalWrite(ledPin, LOW); 
      delay(100);
    lcd.clear();
        var = 0;
      delay(2000);
      digitalWrite(ledPin2, LOW);  
      delay(100);

    myservo.write(5, 15, true);


  }
  
  
  
}

