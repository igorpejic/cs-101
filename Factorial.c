/*Factorial Finder - The Factorial of a positive integer, n, 
is defined as the product of the sequence n, n-1, n-2, ...1 
and the factorial of zero, 0, is defined as being 1.
Solve this using both loops and recursion.*/

#include <stdio.h>

int fact_loop(int num);
int fact_recursion(int num);
int main()
{
    int num;
    printf("Please insert number\n");
    scanf("%d", &num);
    printf("The factoriel is %d\n", fact_loop(num));
    printf("The factoriel is %d\n", fact_recursion(num));

    return 0;
}

int fact_loop(int num)
{
    int i;
    int sum= 1;
    for(i = 1; i <= num; i++)
    {
        sum *= i;
    }
    return sum;
}




int fact_recursion(int num)
{
    if(num == 1)
        return 1;
    return num*fact_recursion (num-1);

}

