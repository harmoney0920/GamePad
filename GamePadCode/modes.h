#include "intro_PIX.h"

 int initIntro;
 boolean isFirstLevel,isSecondLevel,isThirdLevel,isFourthLevel,isFifthLevel,isSixthLevel;

void initModes(){
  initIntro=false;
  isFirstLevel=false;
  isSecondLevel = false;
  isThirdLevel = false;
  isFourthLevel = false; 
  isFifthLevel = false;
  isSixthLevel = false;
}


 void introScreen(){
 if(initIntro==false){
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
 }
 drawLevel(0);
 drawHero(); 

if(buttonBuffer[1]==1){curMode=1;}
}



void secondLevel(){
 if(isSecondLevel==false){
  tft.setClipRect(0,0,screenW, screenH);
   drawLevel(1);
 tft.updateScreen();
 isSecondLevel=true;
 }
 drawLevel(1);
 drawHero(); 
 
if(buttonBuffer[0]==1){curMode=2;}
}



void thirdLevel(){
 if(isThirdLevel==false){
 tft.setClipRect(0,0,screenW, screenH);
 drawLevel(2);
 tft.updateScreen();
 isThirdLevel=true;
 }
 drawLevel(2);
 drawHero(); 

if(buttonBuffer[1]==1){curMode=3;}
}



void fourthLevel(){
 if(isFourthLevel==false){
  tft.setClipRect(0,0,screenW, screenH);
   drawLevel(3);
 tft.updateScreen();
 isFourthLevel=true;
 }
 drawLevel(3);
 drawHero(); 

if(buttonBuffer[0]==1){curMode=4;}
}



void fifthLevel(){
 if(isFifthLevel==false){
  tft.setClipRect(0,0,screenW, screenH);
   drawLevel(4);
 tft.updateScreen();
 isFifthLevel=true;
 }
 drawLevel(4);
 drawHero(); 

 if(buttonBuffer[1]==1){curMode=5;}
}


void sixthLevel(){
 if(isSixthLevel==false){
  tft.setClipRect(0,0,screenW, screenH);
   drawLevel(5);
 tft.updateScreen();
 isSixthLevel=true;
 }
 drawLevel(5);
 drawHero(); 

if(buttonBuffer[0]==1){curMode=0;}
isFirstLevel=false;
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
 
}
}
