
// Check to See if Hero & Enemies Collide
boolean checkCollide3(int hX, int hY, int hW, int hH, int eX, int eY, int eW, int eH){
  boolean canMove = true; // Assume a move can be made
  boolean xMin = false; if(hX < eX + eW){xMin = true;}               // Does the xMin collide?
  boolean xMax = false; if(hX + hW > eX){xMax = true;}               // Does the xMax collide?
  boolean yMin = false; if(hY < eY + eH){yMin = true;}               // Does the yMin collide?
  boolean yMax = false; if(hY + hH > eY){yMax = true;}               // Does the yMin collide?
  if (xMin && xMax && yMin && yMax) {canMove = false;}
  return canMove;
}

void fightAgainst(){

  boolean canFightAgainst = checkCollide3(heroX, heroY, heroW, heroH, icemanX, icemanY, icemanW, icemanH);
  if(canFightAgainst==false){
    if(random(100) ==  0){
     heroHealth=heroHealth-1;
     updateHead(2);
  }
  
  if(heroHealth==0){
    canFightAgainst=false;
     tft.setClipRect(heroX+4, heroY+2, heroW+9, heroH+9);
   drawLevel(curMode);
    tft.updateScreen();
  }
  }
  return canFightAgainst;
}
boolean checkCollide4(int hX, int hY, int hW, int hH, int eX, int eY, int eW, int eH){
  boolean canMove = true; // Assume a move can be made
  boolean xMin = false; if(hX < eX + eW){xMin = true;}               // Does the xMin collide?
  boolean xMax = false; if(hX + hW > eX){xMax = true;}               // Does the xMax collide?
  boolean yMin = false; if(hY < eY + eH){yMin = true;}               // Does the yMin collide?
  boolean yMax = false; if(hY + hH > eY){yMax = true;}               // Does the yMin collide?
  if (xMin && xMax && yMin && yMax) {canMove = false;}
  return canMove;
}
void fightBoss(){

  boolean canFightBoss = checkCollide4(heroX, heroY, heroW, heroH, icemanX, icemanY, icemanW, icemanH);
  if(canFightBoss==false && buttonBuffer[3]==1){
    if(random(50) ==  0){
     icemanHealth=icemanHealth-1;
     updateHead(2);
  }
  
  if(icemanHealth==0){
    canFightBoss=false;
     tft.setClipRect(icemanX+4, icemanY+2, icemanW+9, icemanH+9);
   drawLevel(curMode);
    tft.updateScreen();
  }
  }
  return canFightBoss;
}
