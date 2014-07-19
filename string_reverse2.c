#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char str[100];
    char str2[100];
    char c;
    int i = 0, j;
    //printf("unesite string");
    while( (c = getchar()) != '\n')
    {
        str[i] = c;
        i++;
    }
    //printf("I je %d\n", i);
    j = i-1;
    i = 0;
    while(j >= 0)
    {
        str2[i] = str[j];
        j--;
        i++;
    }
    printf("I je %d\n", i);
    str2[i] = '\0';
    i = 0;
    while(str2[i] != '\0')
    {
        printf("%c", str2[i]);
        i++;
    }
    printf("\n");
    return 0;
}


    

