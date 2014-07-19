/*Coin Flip Simulation - Write some code that simulates flipping a single 
 * coin however many times the user decides. The code should record the outcomes 
 * and count the number of tails and heads*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    srand(time(NULL));
    int times, head, tails;
    int i;
    printf("How many times do you want to trow the coin?\n");
    scanf("%d", &times);
    head = tails = 0;
    for(i = 0; i < times; i++)
    {
        if(rand()%2 == 0)
            head++;
        else 
            tails++;
    }
    printf("HEAD:%d\nTAILS:%d\n",head,tails);
    return 0;
}

