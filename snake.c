#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define NEW  1
#define BORDER 2
#define QUIT 3



int life = 3;
int score = 0;
bool wallHit = false;
int tailSize = 4;
char snake[200];
int option;

// starting menu
void menu(){

  printf("\n\n\n\n\n");
  printf("%40s\n", "                      The Snake Game");
  printf("%40s\n", "                      1) New Game (3 lives)");
  printf("%40s\n", "                      2) Game with Borders (1 life)");
  printf("%30s\n", "                      3) Quit Game");
  scanf("%d", &option );

}

//initialize / reset game
void setup(){
  switch(option){
    case NEW:
      break;
    case BORDER:
      break;
    case QUIT:
      break;
    default:
      break;
  }
}


//build perimeter and score/life display function

//take input function





//3 lives
//score: 0 + # of food eaten
//build perimeter with !
//lose life if hit walls
//after die will ask for name and save score on txt file: player name, score, date and time

int main(){
  menu();
  setup();
  //draw();


  return 0;
}
