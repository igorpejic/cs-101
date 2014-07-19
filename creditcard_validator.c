/*Credit Card Validator - Takes in a credit card number from a
common credit card vendor (Visa, MasterCard, American Express, Discoverer) 
and validates it to make sure that it is a valid number 
(look into how credit cards use a checksum).*/

#include <stdio.h>

int validate(int *num, int len);
void reverse(int *str, int len);
void printarr(int *str, int len);
int main()
{
    int num[50];
    int i = 0;
    int len;

    printf("Please insert your credit card number");
    while(scanf("%d", &num[i]))
    {
        i++;
    }
    len = i-1;
    printarr(num, len);
    printf("\n");

    if( validate(num, len))
        printf("The credit card is valid\n");
    else
        printf("Credit card is not valid\n");
   
    return 0;
}
    

int validate(int *num, int len)
{
   int i, j, t, last_digit;
   last_digit = num[len];
   i = 0;
   int sum = 0;
   reverse(num, len);
   for(i = 0; num[i] < len; i += 2)
   {
       num[i] = num[i] * 2;
   }
   for(i = 0; i < len; i++)
   {
       if(num[i] > 9)
           num[i] -= 9;
   }
   for(i = 0; i < len; i++)
   {
       sum += num[i];
   }
   if((last_digit +sum) % 10 == 0)
       return 1;
   return 0;
}


void reverse(int *str, int len)
{
    int i, j, t;
    j = len -1;                 //odbacili smo zadnju znamenku
    for(i = 0; i < len/2; i++)
    {
        t = str[i];
        str[i] = str[j];
        str[j] = t;
        j--;
    }
}
        

void printarr(int *str, int len)
{
    int i;
    for(i = 0; i <= len; i++)
    {
        printf("%d ", str[i]);
    }
}
