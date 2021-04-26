Metro enemy2FrameTimer = Metro(250); 
Metro enemy2BrainTimer = Metro(1000);


int enemy2Health = 2; //How much health is remaining?
int enemy2Smart = 3;//How smart is the enemy?
float enemy2X = 0;//Current X coordinate of enemy
float enemy2Y = 0;//Current Y coordinate of enemy
float enemy2XDir = 0;//Enemy moving left (-1) or right (1)
float enemy2YDir = 0;//Enemy moving up (-1) or down (1)
float enemy2Speed = 3;//How fast can the enemy move?
int enemy2W = 40; //Enemy sprite width
int enemy2H = 24;//Enemy sprite height
int enemy2Frame = 0;//Animation frame of enemy
boolean enemy2Fire = false;//Is the enemy firing/hitting?


void drawEnemy2(){
  if(enemy2BrainTimer.check()){
    int num = random(0,enemy2Smart +1); 
    if(num==0){
      enemy2XDir=random(-1,2);
      enemy2YDir=random(-1,2);
    }
    else {
      if(heroX < enemy2X){
        enemy2XDir=enemy2XDir -1;
        enemy2Frame=8;
 
      }
      if(heroX > enemy2X){
        enemy2XDir=enemy2XDir + 1;
        enemy2Frame=0;
        if(enemy2FrameTimer.check()){
       enemy2Frame= (enemy2Frame+1)%2; 
        }
      }
      if(heroY < enemy2Y){
        enemy2YDir=enemy2YDir -1;
      }
      if (heroY > enemy2Y){
        enemy2YDir=enemy2YDir +1;
      }
    }
    if(enemy2Health==1){
      enemy2Frame=5;
    }
    if(enemy2Health==0){
      enemy2Frame=7;
    }
    
    float nextX = enemy2X + (enemy2XDir * enemy2Speed);
    float nextY = enemy2Y + (enemy2YDir * enemy2Speed);

    if(checkMove(curMode,nextX,nextY,enemy2W,enemy2H)==true){
    enemy2X=nextX;
    enemy2Y=nextY;
  }
   
  }
  
   tft.setClipRect(enemy2X-10, enemy2Y-10, enemy2W+20, enemy2H+20);
   drawLevel(curMode);
   tft.drawRGBBitmap(enemy2X,enemy2Y, enemy_PIX[enemy2Frame], enemy_MASK[enemy2Frame],enemy2W, enemy2H);
   tft.updateScreen();
}
