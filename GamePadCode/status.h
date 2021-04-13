#include "head_MASK.h"           
#include "head_PIX.h"

  void updateHead(int headStatus){
    tft.setClipRect(2,8, 32,32);
  tft.drawRGBBitmap(8, 8, head_PIX[headStatus], 32, 32);
  tft.updateScreen();
}
