/*Next Prime Number - Have the program find prime numbers until the user 
 chooses to stop asking for the next one.*/

#include <stdio.h>
#include <string.h>
int main()
{
    int stat, i , j;
    char c;
    stat = 1;
    printf("press c for continue, q for exit\n");

    for(i = 2; i > -1; i++)
        {
            stat = 1;
            for(j = i/2 + 1; j > 1 ; j--)
            {
                if( i % j == 0)
                {
                    stat = 0;
                    break;
                }
            }
            if (stat == 1 && ((c =getchar()) == 'c'))
                printf("%d ",i);
                else if (c == 'q')
                return 0;
        }
    return 0;
}
     
                    
            
