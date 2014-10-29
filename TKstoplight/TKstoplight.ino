
#include <TinkerKit.h>

TKPotentiometer pot(I0);
TKLed red(O0);
TKLed yellow(O1);
TKLed green(O2);

// int bright = 0;
// int maxBright = 1023;
// int speed = 80;
// int direction = 1;

void setup()
{
  Serial.begin(9600);
}

void loop(){
  
  int potVal = pot.read();
    Serial.print(potVal);                      
red.off();
yellow.off();
green.off();

if(potVal > 100 && potVal < 649){
  red.on();
}

if(potVal > 650 && potVal < 999){
  yellow.on();
}

if(potVal > 1000){
  green.on();
}

delay(10);

}

/*void tina(){
    yellow.brightness(bright);
  bright += (speed * direction);
  
  if(bright > maxBright || bright < 0){
    direction *= -1;
  } 
}
*/


