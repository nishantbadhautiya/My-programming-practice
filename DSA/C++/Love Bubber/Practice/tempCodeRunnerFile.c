#include<stdio.h>
int main() 
{
    int num ;
    printf("Enter the number: " );
    scanf("%d", &num);
    for(int i = 2; i < num; i++){
        if(num % i == 0){
            printf("%d is not a prime number\n", num);
        }
    }
    return 0;
}