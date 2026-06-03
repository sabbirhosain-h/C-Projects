#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int random_in_range(int min, int max) {
    return min + rand() % (max - min + 1);
}

int main(){
    srand(time(NULL));
    int x = random_in_range(1, 100);
    int guessTheNnumber ;
    int gusses = 0;

    printf("Guess the number : ");
    scanf("%d", &guessTheNnumber);
    do
    {
        if (guessTheNnumber > x)
        {
            printf("Too high! Try a lower number.\n");
            scanf("%d", &guessTheNnumber);
        }
        else if (guessTheNnumber < x)
        {
            printf("Too low! Try a higher number.\n");
            scanf("%d", &guessTheNnumber);
        }
        gusses++;
    } while (guessTheNnumber != x);
    
    printf("Congratulations! You guessed the number.\n");
    printf("Number of guesses: %d\n", gusses);
    return 0;
}