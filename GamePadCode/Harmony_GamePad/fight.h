
// Check to See if Hero & Enemies Collide
boolean checkCollide(int hX, int hY, int hW, int hH, int eX, int eY, int eW, int eH){
  boolean canMove = true; // Assume a move can be made
  boolean xMin = false; if(hX < eX + eW){xMin = true;}               // Does the xMin collide?
  boolean xMax = false; if(hX + hW > eX){xMax = true;}               // Does the xMax collide?
  boolean yMin = false; if(hY < eY + eH){yMin = true;}               // Does the yMin collide?
  boolean yMax = false; if(hY + hH > eY){yMax = true;}               // Does the yMin collide?
  if (xMin && xMax && yMin && yMax) {canMove = false;}
  return canMove;
}

void fight(){

  boolean canFight = checkCollide(heroX, heroY, heroW, heroH, enemyX, enemyY, enemyW, enemyH);
  if(canFight ==false && buttonBuffer[3]==1){
    if(random(50) ==  0){
     enemyHealth=enemyHealth-1;
     updateHead(2);
  }
  
  if(enemyHealth==0){
    canFight=false;
     tft.setClipRect(enemyX+4, enemyY+2, enemyW+9, enemyH+9);
   drawLevel(curMode);
    tft.updateScreen();
  }
  }
  return canFight;
}
