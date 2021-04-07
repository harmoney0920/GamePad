#include "Phoenix_MASK.h"           
#include "Phoenix_PIX.h"

float heroX, heroY, heroSpeed= 1;

boolean isLevelDrawn, heroDir; 

int heroFrame, heroW, heroH;

Metro heroFrameTimer = Metro(250); // A prototype for a Metro timer

void initHero(){
  heroX=(screenW/2-50);
  heroY= (screenH/2);
  heroSpeed = 0.5;
  isLevelDrawn=false;
  heroDir=true;
  heroFrame=0;
  heroW=40;
  heroH=32;
}

void drawHero(){
 
  float nextX = heroX + (joystickBuffer[1] * heroSpeed);
  float nextY = heroY + (joystickBuffer[0] * heroSpeed);

  if(checkMove(curMode,nextX,nextY,heroW,heroH)==true){
    heroX=nextX;
    heroY=nextY;
  }
 

  if(joystickBuffer[1]==1){
   heroDir=true;
  }else if (joystickBuffer[1] == -1){
    heroDir=false;
  }

  if(joystickBuffer[1]==0 && heroDir == true){heroFrame=0;
  }
  if(joystickBuffer[0]==0 && heroDir == false){heroFrame=5;
  }

   tft.setClipRect(heroX-1, heroY-1, heroW+4, heroH+4);
   tft.drawRGBBitmap(heroX,heroY, Phoenix_PIX[heroDir], Phoenix_MASK[heroDir],heroW, heroH);
   tft.updateScreen();
}
