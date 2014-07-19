/*Calculating pi from Gauss-Legender algorithm with user define number of
decimal places */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double  pi();
int main()
{
    int a;
    printf("Chose the number of decmial places");
    scanf("%d", &a);
    printf("%.*f\n", a,  pi());
    return 0;
}

double pi()
{
    double a=1.0, b= 1/sqrt(2), t= 0.25, x = 1;
    double y;
    int i;
    for(i = 0; i < 6 ; i++)
    {
        y = a;
        a = (a+b)/2;
        b = sqrt(y*b);
        t = t - x*(y - a)*(y-a);
        x = 2*x;

    }
    return (((a + b)*(a + b))/(4*t));
}

