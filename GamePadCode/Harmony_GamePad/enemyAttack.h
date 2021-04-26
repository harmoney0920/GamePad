
// Check to See if Hero & Enemies Collide
boolean checkCollide2(int hX, int hY, int hW, int hH, int eX, int eY, int eW, int eH){
  boolean canMove = true; // Assume a move can be made
  boolean xMin = false; if(hX < eX + eW){xMin = true;}               // Does the xMin collide?
  boolean xMax = false; if(hX + hW > eX){xMax = true;}               // Does the xMax collide?
  boolean yMin = false; if(hY < eY + eH){yMin = true;}               // Does the yMin collide?
  boolean yMax = false; if(hY + hH > eY){yMax = true;}               // Does the yMin collide?
  if (xMin && xMax && yMin && yMax) {canMove = false;}
  return canMove;
}

void fightBack(){

  boolean canFightBack = checkCollide2(heroX, heroY, heroW, heroH, enemyX, enemyY, enemyW, enemyH);
  if(canFightBack==false){
    if(random(200) ==  0){
     heroHealth=heroHealth-1;
     updateHead(2);
  }
  
  if(heroHealth==0){
    canFightBack=false;
     tft.setClipRect(heroX+4, heroY+2, heroW+9, heroH+9);
   drawLevel(curMode);
    tft.updateScreen();
  }
  }
  return canFightBack;
}
