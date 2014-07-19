/*Happy Numbers - A happy number is defined by the following
process. Starting with any positive integer, replace the number 
by the sum of the squares of its digits, and repeat the process 
until the number equals 1 (where it will stay), or it loops endlessly 
in a cycle which does not include 1. Those numbers for which 
this process ends in 1 are happy numbers, while those that do not end in
1 are unhappy numbers. Display an example
of your output here. Find first 8 happy numbers.*/

#include <stdio.h>


int is_happy(int num);
int char_to_sum(char *num);
void int_to_char(int num, char *str);
int main()
{
    int MAX = 100000;
    int i, num;
    int control;
    int loops;
    loops = 0;
    for(i = 0; i < MAX ; i++)
    {
        if(loops == 8)
            return 0;
            if(is_happy(i))
            {
                loops++;
                printf("%d\n",i);
            }
    }
    return 0;
}

int is_happy(int num)
{
    int MAX = 100000;
    int control = 0;
    int i = 0;
    int sum = num;
    char nums[100];
    while(1)
    {
        if(control == MAX)
            return 0;
        while(control < MAX)
        {
            int_to_char(sum, nums);
            if((sum = char_to_sum(nums)) == 1)
                return 1;
            control++;
        }
        
    }
}

int char_to_sum(char *num)
{
    int number = 0;
    int i = 0;
    while(num[i] != '\0')
    {
           number += (num[i] - '0')*(num[i] - '0'); 
           i++;
    }
    for(i = 0; i < 100; i++)
    {
        num[i] = '\0';
    }
    return number;
}
void int_to_char(int num, char *str)
{
    int i = 0;
    while(num > 0)
    {
        str[i] = (char)(((int)'0')+num%10);
        num /= 10;
        i++;
    }
}

