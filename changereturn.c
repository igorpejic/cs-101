/* Change Return Program - The user enters a cost and then the amount 
 * of money given. 
 * The program will figure out the change and the number of quarters, 
 * dimes, nickels, pennies needed for the change.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float cost, amount;
    printf("What a stupid shop in which you have to enter the cost, I know right?\n");
    printf("Please enter cost\n");
    scanf("%f", &cost);
    printf("Please enter the amount\n");
    scanf("%f", &amount);
    if( amount < cost)
    {
        printf("you do not have enough money");
        return 0;
    }
    float nearest= amount - cost;
    nearest  *=100;
    float change = floor(nearest*100 +0.5)/100; /*searches nearest because float is imperfect*/
    
    printf("To return %d dollars\n", (int)change/100);
    printf("To return %d quarters\n", (int)((int)change%100)/25);
    printf("To return %d dimes\n", (int)((((int)change%100)%25)/10));
    printf("To return %d nickles\n", (int)((((int)change%100)%25)%10)/5);
    printf("To return %d pennies\n",  (int)(((((int)change%100)%25)%10)%5));

    return 0;
}
    
