#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>




int life = 3;
int score = 0;
bool wallHit = false;
int tailSize = 4;
char snake[200];

// starting menu
void menu(){
  int option;
  print("\n\n\n\n\n");
  printf("%20s\n", "The Snake Game" );
  printf("%20s\n", "1) New Game (3 lives)" );
  printf("%20s\n", "2) Game with Borders (1 life)" );
  printf("%20s\n", "3) Quit Game" );
  scanf("%d", option );

}

//initialize / reset game


//build perimeter and score/life display function

//take input function





//3 lives
//score: 0 + # of food eaten
//build perimeter with !
//lose life if hit walls
//after die will ask for name and save score on txt file: player name, score, date and time

int main(){
  setup();
  draw();


  return 0;
}
