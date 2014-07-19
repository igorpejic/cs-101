/*Happy Numbers - A happy number is defined by the following
process. Starting with any positive integer, replace the number 
by the sum of the squares of its digits, and repeat the process 
until the number equals 1 (where it will stay), or it loops endlessly 
in a cycle which does not include 1. Those numbers for which 
this process ends in 1 are happy numbers, while those that do not end in
1 are unhappy numbers. Display an example
of your output here. Find first 8 happy numbers.*/

#include <stdio.h>

#define MAX 10000
#define HAPPY 1

int is_happy(int num);
int main()
{
    int i, num;
    printf("POZDRAV");
    int control;
    int loops;
    loops = 0;
    printf("seri");
    for(i = 0; i < MAX ; i++)
    {
        printf("seri");
            printf("GOVVVVVVVVV");
            if(is_happy(i))
                printf("%d\n",i);
    }
    printf("seri");
    return 0;
}

int is_happy(int num)
{
    int control = 0;
    int i = 0;
    int sum = 0;
    char nums[100];
    while(1)
    {
        if(control == MAX)
            return 0;
        
        printf("govno");
        i = 0;
        while(num > 0)
        {
            printf("GOVNO");
            nums[i] = (char)(((int)'0')+num%10);
            num /= 10;
            i++;
        }
        i = 0;
        while(nums[i] != '\0')
        {
           sum += (nums[i] - '0')*(nums[i] - '0'); 
        }
        if (sum == 1)
            return 1;
        for(i = 0; i < 100; i++)
            nums[i] = '\0';
        control++;
    }
}

       




    

