#include <stdio.h>
#include <string.h>
void inplace_rev( char * s ) {
      char t, *e = s + strlen(s);
        while ( --e > s ) { t = *s;*s++=*e;*e=t; }
}
int main()
{
    char str[] = "ja sam cigan";
    inplace_rev(str);
    printf("%s\n", str);
    return 0;
}
