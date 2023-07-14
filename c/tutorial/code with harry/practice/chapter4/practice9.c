#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int number;
    srand(time(0));
    number = rand() % 100 + 1;
    printf("Random number is: %d \n", number);
    int guess, nguess = 1;
    do
    {
        printf("guess a number between 1 and 100 :");
        scanf("%d", &guess);
        if (guess < number)
        {
            printf("higher number please! \n");
        }
        else if (guess > number)
        {
            printf("Lower number please! \n");
        }
        else
        {
            printf("you guessed in %d attemps! \n", nguess);
        }
        nguess++;
    } while (number != guess);
    return 0;
}