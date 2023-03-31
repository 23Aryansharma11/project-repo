#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int number,guess,nguess=1;
    srand(time(0));
    number=rand()%100+1; // gets random number which changes every second
    //loop
    printf("guess the number\n");
    do
    {
       //printf("guess the number\n");
       scanf("%d",&guess);
       if (guess>number)
       {
        printf("guess a lower number\n");
       }
       else if (guess<number)
       {
        printf("guess a higher number\n");
       }
       nguess++;
    } while (guess!=number);
    printf("coreect number guessed = %d \n took %d chances",number,nguess);
}