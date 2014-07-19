#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
  int i = 0,j;
  int strlen;
  char c;
  char str[100];
  char t;
  printf("Insert string");

  while((c = getchar()) != '\n')
  {
    str[i] = c;
    i++;
  }
  printf("%d \n", i);

  strlen = i;
  j = 0;
  i--;
  while( i > strlen/2 -1)
  {
    t = str[i];
    str[i] = str[j];
    str[j] = t;
    i--;
    j++;
  }
  str[strlen] = '\0'; 
  i = 0;
  while (str[i] != '\0')
  {
      printf("%c",str[i]);
      i++;
  }
  putchar('\n');

  return 0;
}
