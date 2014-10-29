
#include <TinkerKit.h>

TKButton btn(I0);
TKLed basic(O0);
TKLed ratchet(O1);
TKLed patricia(O2);

int bright = 0;
int maxBright = 1023;
int speed = 80;
int direction = 1;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  if(btn.pressed()) {      
      Serial.println("pressed");
    basic.on();     // turn LED on 
  } else {
    basic.off();    // turn LED off
  }
  
  
  if(btn.held()) {      
      Serial.println("held");
     tina();     // turn LED on 
  } 
    
    
    
    
  if(btn.released()) {
        
      Serial.println("released");
    patricia.on();     // turn LED on 
  } else {
    patricia.off();    // turn LED off
  
  }

  delay(50);  
}

void tina(){
    ratchet.brightness(bright);
  bright += (speed * direction);
  
  if(bright > maxBright || bright < 0){
    direction *= -1;
  } 
}



