#include <Metro.h>          // This adds the Metro library to your sketch
Metro frameTimer = Metro(1000); // A prototype for a Metro timer
int x;

void checkFrameRate(){
   x++; 
  if(frameTimer.check( )){
  //  Serial.println(x); 
    x=0;
  }
}
