#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define NEW  1
#define BORDER 2
#define QUIT 3


//TODO add sound to keystrokez
int score;
bool wallHit = false;
bool gameOver;
int tailSize = 4;
char snake[200];
int width = 50;
int height = 30;
int gameplay; //gameplay
int tokenX, tokenY; //x coordinate of token

//used to keep up with directions
typedef enum  {STOP = 0,LEFT,RIGHT,UP,DOWN} Direction;
Direction Dir;

//need variable to hold direction

// starting menu
void menu(){

  printf("\n\n\n\n\n");
  printf("%40s\n", "                      The Snake Game");
  printf("%-40s\n", "                      1) New Game ");
  printf("%-40s\n", "                      2) Game with Borders");
  printf("%-40s\n", "                      3) Quit Game");
  //maybe print out high score ever
  scanf("%d", &gameplay );

}

//initialize / reset game
void setup(){
  gameOver = false;
  Dir = STOP;
  tokenX = rand()%width; //remainder up to 49
  tokenY = rand()%height;

}


//build perimeter and score/life display function
void draw(){
  system("clear"); //clears the screen
  printf("%40s:%d\n", "                      Score", score);

  //top border
  for(int i = 0; i <= width; i++){
    printf("=");
  }
  printf("\n");
  //sides: more TODO here; ie code snake, and fruit etc.
  for(int i = 0; i < height; i++){
    printf("!%-50s!\n", " ");
  }

//bottom border
  for(int i = 0; i <= width; i++){
    printf("=");
  }



  //show score
  //show lives

}

//take input function





//3 lives
//score: 0 + # of food eaten
//build perimeter with !
//lose life if hit walls
//after die will ask for name and save score on txt file: player name, score, date and time

int main(){
  menu();
  setup();
  draw();


  return 0;
}
