/* Prime Factorization - Have the user enter a number and find all 
Prime Factors (if there are any) and display them.
*/
#include <stdio.h>
int main()
{
    int n, j;
    int i;
    printf("Enter the number");
    scanf("%d", &n);
    for(i = 2; i < n; i++)
    {
        if( n % i == 0)
        {
            printf("Is not a prime number\n");
            return 0;
        }
    }
    printf("Is a prime number\n");
    return 0;
}
    

