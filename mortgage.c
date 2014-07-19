/*Mortgage Calculator - Calculate the monthly payments of a fixed term 
 * mortgage over given Nth terms at a given interest rate. Also figure 
 * out how long it
 * will take the user to pay back the loan.*/

#include <stdio.h>

int main()
{
    float  amount, interest, months;
    printf("Type the amount you rented\n");
    scanf("%f", &amount);
    printf("Type the interest in percentage\n");
    scanf("%f", &interest);
    printf("Type the amount of months\n");
    scanf("%f", &months);
    printf("Monthly payment is %f", (((interest/100.0)+1)*amount)/(float)months); 
    int i = 0;
    float test = 0;
    while(test < amount)
    {
      test+=  ((((interest/100)+1)*amount)/(float)months);
          i++;
    }
    printf("\n You will pay it in %d months", i);

    return 0;
}
