#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int game(char you, char comp)
{
    if (you == comp)
    {
        return 0;
    }
    if (you == 's' && comp == 'g')
    {
        return -1;
    }
    else if (you == 'g' && comp == 's')
    {
        return 1;
    }

    if (you == 's' && comp == 'w')
    {
        return 1;
    }
    else if (you == 'w' && comp == 's')
    {
        return -1;
    }

    if (you == 'g' && comp == 'w')
    {
        return -1;
    }
    else if (you == 'w' && comp == 'g')
    {
        return 1;
    }
}
int main()
{
    char comp;
    char you;
    srand(time(0));
    int number = rand() % 100 + 1;
    if (number < 33)
    {
        comp = 's';
    }
    else if (number > 33 && number < 66)
    {
        comp = 'w';
    }
    else
    {
        comp = 'g';
    }
    printf("enter a character: snake(s), water(w) and gun(g): ");
    scanf("%c", &you);
    int result = game(you, comp);
    if (result == 0)
    {
        printf("Game Draw!");
    }
    else if (result == 1)
    {
        printf("You Win!");
    }
    else
    {
        printf("You Lose!");
    }
    printf("computer choosed: %c", comp);
    return 0;
}