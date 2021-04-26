#include "head_MASK.h"           
#include "head_PIX.h"
#include "hearts_MASK.h"
#include "hearts_PIX.h"


  void updateHead(int headStatus){
    tft.setClipRect(2,8, 32,32);
  tft.drawRGBBitmap(8, 8, head_PIX[headStatus], 32, 32);
  tft.updateScreen();
}

void heart1(){
  tft.setClipRect(60,8,240,32);
  tft.drawRGBBitmap(58,8,hearts_PIX[0], 240,32);
  tft.updateScreen();
}
void heart2(){
  tft.setClipRect(60,8,240,32);
  tft.drawRGBBitmap(58,8,hearts_PIX[1], 240,32);
  tft.updateScreen();
}
void heart3(){
  tft.setClipRect(60,8,240,32);
  tft.drawRGBBitmap(58,8,hearts_PIX[2], 240,32);
  tft.updateScreen();
}
void heart4(){
  tft.setClipRect(60,8,240,32);
  tft.drawRGBBitmap(58,8,hearts_PIX[3], 240,32);
  tft.updateScreen();
}
void heart5(){
  tft.setClipRect(60,8,240,32);
  tft.drawRGBBitmap(58,8,hearts_PIX[4], 240,32);
  tft.updateScreen();
}
