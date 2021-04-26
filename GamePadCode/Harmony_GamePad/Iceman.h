#include "iceman_MASK.h"           
#include "iceman_PIX.h"


Metro icemanFrameTimer = Metro(250); 
Metro icemanBrainTimer = Metro(1000);

int icemanMargin = 1;//Margin for drawing clipRect around enemy
int icemanStatus = 1;//Keeps track of active/inactive enemies
int icemanType = 0; //Which enemy is this: Zombie/Unicorn?
int icemanHealth = 2; //How much health is remaining?
int icemanSmart = 3;//How smart is the enemy?
float icemanX = 0;//Current X coordinate of enemy
float icemanY = 0;//Current Y coordinate of enemy
float icemanXDir = 0;//Enemy moving left (-1) or right (1)
float icemanYDir = 0;//Enemy moving up (-1) or down (1)
float icemanSpeed = 1;//How fast can the enemy move?
int icemanW = 80; //Enemy sprite width
int icemanH = 80;//Enemy sprite height
int icemanFrame = 0;//Animation frame of enemy
boolean icemanFire = false;//Is the enemy firing/hitting?

void drawIceman(){
  if(icemanBrainTimer.check()){
    int num = random(0,icemanSmart +1); 
    if(num==0){
      icemanXDir=random(-1,2);
      icemanYDir=random(-1,2);
    }
    else {
      if(heroX < icemanX){
        icemanXDir=icemanXDir -1;
        icemanFrame=1;
 
      }
      if(heroX > icemanX){
        icemanXDir=icemanXDir + 1;
        icemanFrame=0;
        }
      }
      if(heroY < icemanY){
        icemanYDir=icemanYDir -1;
      }
      if (heroY > icemanY){
        icemanYDir=icemanYDir +1;
      }
    }
    float nextX = icemanX + (icemanXDir * icemanSpeed);
    float nextY = icemanY + (icemanYDir * icemanSpeed);

    if(checkMove(curMode,nextX,nextY,icemanW,icemanH)==true){
    icemanX=nextX;
    icemanY=nextY;
  }
   
  

   tft.setClipRect(icemanX-4, icemanY-2, icemanW+9, icemanH+9);
   drawLevel(curMode);
   tft.drawRGBBitmap(icemanX,icemanY, iceman_PIX[icemanFrame], iceman_MASK[icemanFrame],icemanW, icemanH);
   tft.updateScreen();
}
