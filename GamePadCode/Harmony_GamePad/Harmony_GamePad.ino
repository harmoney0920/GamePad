// Phoenix!
// Harmony Petty || 29 Mar 2021
// CRT 360 Advanced Prototyping || GamePad
int curMode = -1;

#include "frames.h"
#include "screen.h"
#include "tile.h"
#include "controls.h"
#include "status.h"
#include "interaction.h"
#include "hero.h"
#include "enemy.h"
#include "enemy2.h"
#include "Iceman.h"
#include "fight.h"
#include "enemyAttack.h"
#include "IcemanFight.h"
#include "modes.h"


void setup() {
Serial.begin(9600);
randomSeed(analogRead(A9));
initScreen();
initControls();
initHero();
initNeighbors();
}

void loop() {
checkFrameRate();
getControls();
runMode();
tft.updateScreen();
}
