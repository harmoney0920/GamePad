#include "intro_PIX.h"
#include "spryoDealth_PIX.h"
#include "gameover_PIX.h"

 int initIntro;
 boolean isFirstLevel,isSecondLevel,isThirdLevel,isFourthLevel,isFifthLevel,isSixthLevel, isSeventhLevel, isEightLevel;

void initModes(){
  initIntro=false;
  isFirstLevel=false;
  isSecondLevel = false;
  isThirdLevel = false;
  isFourthLevel = false; 
  isFifthLevel = false;
  isSixthLevel = false;
  isSeventhLevel=false;
  isEightLevel=false;
}


 void introScreen(){
 if(initIntro==false){
  isSeventhLevel=false;
  tft.setClipRect(0,0,screenW, screenH);
  tft.drawRGBBitmap(0,0,intro_PIX[0],320,240); 
  tft.updateScreen();
  initIntro=true; 
}
if(buttonBuffer[0]==1){curMode=0;}

 }
 


void firstLevel(){
 if(isFirstLevel==false){
  tft.setClipRect(0,0,screenW, screenH);
   drawLevel(0);
 tft.updateScreen();
 isFirstLevel=true;
  updateHead(0);
  enemyX=250;
  enemyY=120;
  enemyHealth=2;
  heroHealth=5;
  }
 fight();
 fightBack();
 drawLevel(0);
 if(enemyHealth>0){
 drawEnemy();
 }
 if(heroHealth>0){
 drawHero();
 }
if(interaction[curMode][curTile] == 0x02 && buttonBuffer[1]==1){curMode = 1; isFirstLevel = false; heroX=10; heroY=120;}
if(heroHealth<=0){
  curMode=6;
}

}



void secondLevel(){
 if(isSecondLevel==false){
  tft.setClipRect(0,0,screenW, screenH);
   drawLevel(1);
 tft.updateScreen();
 isSecondLevel=true;
   updateHead(0);
   enemyX=30;
  enemyY=60;
  enemyHealth=2;
  heroHealth=5;
 }
  fight();
  fightBack();
 drawLevel(1);
 if(enemyHealth>0){
 drawEnemy();
 } 
 if(heroHealth>0){
 drawHero();
 }
if(interaction[curMode][curTile] == 0x09 && buttonBuffer[1]==1){curMode =2; isSecondLevel = false; heroX=150; heroY=160;}
if(interaction[curMode][curTile] == 0x03 && buttonBuffer[1]==1){curMode = 4; isSecondLevel = false; heroX=160; heroY=120;}
 if(heroHealth<=0){
  curMode=6;
 }
}



void thirdLevel(){
 if(isThirdLevel==false){
 tft.setClipRect(0,0,screenW, screenH);
 drawLevel(2);
 tft.updateScreen();
 isThirdLevel=true;
   updateHead(0);
    enemyX=200;
  enemyY=120;
   enemyHealth=2; 
   heroHealth=5;
 }
 fight();
 fightBack();
  drawLevel(2);
 if(enemyHealth>0){
  drawEnemy();
 }
 if(heroHealth>0){
 drawHero(); 
 }
if(interaction[curMode][curTile] == 0x07 && buttonBuffer[1]==1){curMode = 1; isThirdLevel = false; heroX=160; heroY=120;}
if(interaction[curMode][curTile] == 0x1E && buttonBuffer[1]==1){curMode = 3; isThirdLevel = false; heroX=160; heroY=200;}
if(heroHealth<=0){
  curMode=6;
}
}



void fourthLevel(){
 if(isFourthLevel==false){
  tft.setClipRect(0,0,screenW, screenH);
   drawLevel(3);
 tft.updateScreen();
 isFourthLevel=true;
   updateHead(0);
     enemyX=200;
  enemyY=180;
   enemyHealth=2;
   heroHealth=5;
 }
 fight();
 fightBack();
 drawLevel(3);
 if(enemyHealth>0){
  drawEnemy();
 }
 if(heroHealth>0){
   drawHero();
 } 
 if(interaction[curMode][curTile] == 0x1F && buttonBuffer[1]==1){curMode = 5; isFourthLevel = false; heroX=20; heroY=120;}
 if(heroHealth<=0){
 curMode=6;
 }
}



void fifthLevel(){
 if(isFifthLevel==false){
  tft.setClipRect(0,0,screenW, screenH);
   drawLevel(4);
 tft.updateScreen();
 isFifthLevel=true;
   updateHead(1);
   enemyHealth=2;
 }
 drawLevel(4);
 drawHero(); 
  if(interaction[curMode][curTile] == 0x06 && buttonBuffer[1]==1){curMode = 1; isFifthLevel = false; heroX=10; heroY=120;}
}


void sixthLevel(){
 if(isSixthLevel==false){
  tft.setClipRect(0,0,screenW, screenH);
   drawLevel(5);
 tft.updateScreen();
 isSixthLevel=true;
   updateHead(0);
   icemanX= 220;
   icemanY= 100;
   icemanHealth=2;
 }
 fightAgainst();
 fightBoss();
 drawLevel(5);
 if(icemanHealth>0){
 drawIceman();
 }
 if(heroHealth>0){
 drawHero();
 } 
isFirstLevel=false;
if(heroHealth<=0){
  curMode=6;
}
if(icemanHealth<=0){
  curMode=7;
}
}

 void seventhLevel(){
 if(isSeventhLevel==false){
  tft.setClipRect(0,0,screenW, screenH);
 tft.drawRGBBitmap(0,0,spryoDealth_PIX[0],320,240); 
  tft.updateScreen();
  isSeventhLevel=true; 
}
if(buttonBuffer[1]==1){curMode=-1;initIntro=false;
isFirstLevel=false; isSecondLevel=false; isThirdLevel=false; isFourthLevel=false;
isFifthLevel=false; isSixthLevel=false; heroHealth=5; heroX=(20);
  heroY= (screenH/2+20);}

 }

 
  void eightLevel(){
 if(isEightLevel==false){
  tft.setClipRect(0,0,screenW, screenH);
  tft.drawRGBBitmap(0,0,gameover_PIX[0],320,240);
  tft.updateScreen();
  isEightLevel=true; 
}
if(buttonBuffer[1]==1){curMode=-1;initIntro=false;
isFirstLevel=false; isSecondLevel=false; isThirdLevel=false; isFourthLevel=false;
isFifthLevel=false; isSixthLevel=false; heroHealth=5; heroX=(20);
  heroY= (screenH/2+20);icemanHealth=2;}

 }


    
void runMode(){
 switch(curMode){
 case -1: introScreen(); break;
 case 0: firstLevel( ); break;
 case 1: secondLevel( ); break;
 case 2: thirdLevel( ); break;
 case 3: fourthLevel( ); break;
 case 4: fifthLevel( ); break; 
 case 5: sixthLevel ( ); break;
 case 6: seventhLevel ( ); break; 
 case 7: eightLevel ( ); break;
 
}
}
