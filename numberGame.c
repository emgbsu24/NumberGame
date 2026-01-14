#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  char name[20];
  int correct;
  int guess;
  int turns = 0;
  int keepGoing = 1;

  srand(time(NULL));
  correct = (rand() % 100) + 1;

  printf("Hi, What is your name? ");
  scanf("%s", name);
  printf("Nice to meet you, %s\n", name);
  printf("Let's play a game " );

  while (keepGoing) {
    printf("Please guess a number between 1 and 100: ");
    scanf("%d", &guess);
    turns++;
    
    if (guess < correct) {
      printf("Too low \n");
    } else if (guess > correct) {
      printf("Too high \n");
    } else {
      printf("You got it! \n");
      keepGoing = 0;
    } 
  }

printf("It took you %d turns.\n", turns);

if (turns < 7) {
  printf("That's Great");
} else if (turns > 7) {
  printf("You can do better");
} else {
  printf("Good job");
}

return 0; 
}
