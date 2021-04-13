#include "enemy_MASK.h"           
#include "enemy_PIX.h"


Metro enemyFrameTimer = Metro(250); 
Metro enemyBrainTimer = Metro(1000);

int enemyMargin = 1;//Margin for drawing clipRect around enemy
int enemyStatus = 1;//Keeps track of active/inactive enemies
int enemyType = 0; //Which enemy is this: Zombie/Unicorn?
int enemyHealth = 1; //How much health is remaining?
int enemySmart = 3;//How smart is the enemy?
float enemyX = 0;//Current X coordinate of enemy
float enemyY = 0;//Current Y coordinate of enemy
float enemyXDir = 0;//Enemy moving left (-1) or right (1)
float enemyYDir = 0;//Enemy moving up (-1) or down (1)
float enemySpeed = 0.15;//How fast can the enemy move?
int enemyW = 32; //Enemy sprite width
int enemyH = 32;//Enemy sprite height
int enemyFrame = 0;//Animation frame of enemy
boolean enemyFire = false;//Is the enemy firing/hitting?
