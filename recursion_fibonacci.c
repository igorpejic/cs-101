/*User inputs up to which fibonacci number wants to get print- recursion */
#include <stdio.h>

int fib(int n);
int main()
{
    int n;
    printf("Up to which number do you want fibonacci seq?");
    scanf("%d", &n);
    int i = 1;
    while(n >= i)
    {
        printf("%d\n", fib(i));
        i++;
    }
    return 0;
}
    

int fib(int n)
{
    if (n ==1)
        return 0;
    if (n == 2 || n == 3)
        return 1;

    return fib(n-1) + fib(n-2);
}


/* solution with for loop
int fib(int n)
{
    if (n == 1)
        return 0 ;
    if (n == 2)
        return 1;
    int num, f0=0, f1=1;
    int i;
    for(i = 2; i < n; i++)
    {
        num = f0+f1;
        f0 =  f1;
        f1 = num;
    }
    return num;
}
*/

