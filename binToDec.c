/*Binary to Decimal and Back Converter - Develop a 
converter to convert a decimal number to 
binary or a binary number to its decimal equivalent.*/

#include <stdio.h>
#include <math.h>

void bin_to_dec(int dec, char *bin);
int dec_to_bin(int bin);
int main()
{
    int k;
    char bin[100];
    char dec[100];
    int num;
    printf("1. binary to decimal\n");
    printf("2. decimal to binary");
    scanf("%d",&k);
    if(k == 1)
    {
        printf("\nplease insert the binary number");
        scanf("%d", &num);
        printf("%d (decimal) ----> %d (binary)", num,dec_to_bin(num));
    }
    else if (k == 2)
    {
        printf("\nplease insert the decimal number");
        scanf("%d", &num);
        bin_to_dec(num, bin);
        printf("%d (decimal) ----> %s (binary)", num, bin);
    }
    else 
        printf("wrong number, goodbye");
    return 0;
}

void bin_to_dec(int dec, char *bin)
{
    int i;
    i = 0;
    while(dec > 0)
    {
        if(dec % 2 == 0)
            bin[i] = '0';
        else
            bin[i] = '1';
        dec /= 2;
        i++;
    } bin[i] = '\0';
 }

int dec_to_bin (int bin)
{
    int i;
    int num = 0;
    i = 0;
    while(bin > 0)
    {
        num += ((bin % 10)*(pow(2, i)));
        bin /=10;
        i++;
    }
    return num;

 }

        
    

      

    
