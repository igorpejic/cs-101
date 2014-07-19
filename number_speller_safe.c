/*Number Names - Show how to spell out a number in English. 
You can use a preexisting implementation or roll your own, but you should support 
inputs up to at least one million (or the maximum value of 
your language's default bounded integer type, if that's less). Goes up to 999.999.
For Croatian language*/

#include <stdio.h>
#include <string.h>

int deset_tisucaA;
int desetA;

void sto_tisuca(char *broj, long int num);
void deset_tisuca(char *broj, long int num);
void jedna_tisuca(char *broj, long int num);
void stotina(char *broj, long int num);
void desetica(char *broj, long int num);
void jedinica(char *broj, long int num);
long int insert_number();
int main()
{
    char broj[500];
        deset_tisucaA = 0;
        desetA = 0;
        long int num = insert_number();
        long int t6, t5, t4, t3, t2, t1, t0;
        broj[0] = '\0';

        if(num > 99999)
        {
            sto_tisuca(broj, num);
        }

        if(num >= 10000 && num <= 99999)
        {
            deset_tisuca(broj, num);

        }
        if(num >= 1000 && num <= 9999)
        {
            jedna_tisuca(broj, num);
        }
        if(num >= 100 && num <= 999)
        {
            stotina(broj, num);
        }

        if(num >= 10 && num <= 99)
        {
            desetica(broj, num);
        }
        if(num < 10)
            jedinica(broj, num);

        printf("%s\n",broj);
        return 0;
}

    
    
long int insert_number()
{
    long int num;
    printf("Please insert number");
    scanf("%ld", &num);
    return num;
}
void sto_tisuca(char *broj, long int num)
{

        long int t6 = num /100000; 
        switch(t6)
        {
            case 1: strcat(broj, "sto"); break;
            case 2: strcat(broj, "dvjesto"); break;
            case 3: strcat(broj, "tristo"); break;
            case 4: strcat(broj, "četiristo"); break;
            case 5: strcat(broj, "petsto"); break;
            case 6: strcat(broj, "šeststo"); break;
            case 7: strcat(broj, "sedamsto"); break;
            case 8: strcat(broj, "osamsto"); break;
            case 9: strcat(broj, "devetsto"); break;
        }
        deset_tisuca(broj, num);
}

void deset_tisuca(char *broj, long int num)
{
        long int t4;
        long int t5 = (num % 100000)/10000;
        switch(t5)
        {
            case 1: {
                        t4 = (num % 10000)/1000;
                        switch(t4)
                        {
                            case 0: strcat(broj, "deset");break;
                            case 1: strcat(broj, "jedanaest"); break;
                            case 2: strcat(broj, "dvanaest"); break;
                            case 3: strcat(broj, "trinaest"); break;
                            case 4: strcat(broj, "četrnaest"); break;
                            case 5: strcat(broj, "petnaest"); break;
                            case 6: strcat(broj, "šesnaest"); break;
                            case 7: strcat(broj, "sedamnaest"); break;
                            case 8: strcat(broj, "osamnaest"); break;
                            case 9: strcat(broj, "devetnaest"); break;
                        }
                            deset_tisucaA = 1;
                        break;
                    }

            case 2: strcat(broj, "dvadeset"); break;
            case 3: strcat(broj, "trideset"); break;
            case 4: strcat(broj, "četrdeset"); break;
            case 5: strcat(broj, "pedeset"); break;
            case 6: strcat(broj, "šezdeset"); break;
            case 7: strcat(broj, "sedamdeset"); break;
            case 8: strcat(broj, "osamdeset"); break;
            case 9: strcat(broj, "devedeset"); break;
                    
        }
            jedna_tisuca(broj, num);
}

void  jedna_tisuca(char *broj, long int num)
{
           long int t4 = (num % 10000)/1000;
           /*if(deset_tisucaA)
           {
               strcat(broj, "tisuća");
               stotina(broj, num);
               return;
           }*/
            switch(t4)
            {
                case 0: strcat(broj, "tisuća");break;
                case 1: strcat(broj, "jednatisuća");break;
                case 2: strcat(broj, "dvijetisuće"); break;
                case 3: strcat(broj, "tritisuće"); break;
                case 4: strcat(broj, "četiritisuće"); break;
                case 5: strcat(broj, "pettisuća"); break;
                case 6: strcat(broj, "šesttisuća"); break;
                case 7: strcat(broj, "sedamtisuća"); break;
                case 8: strcat(broj, "osamtisuća"); break;
                case 9: strcat(broj, "devettisuća"); break;
            }
            stotina(broj, num);
        
}
void stotina(char *broj, long int num)
{
        long int t6 = (num % 1000)/100 ; 
        switch(t6)
        {
            case 1: strcat(broj, "sto"); break;
            case 2: strcat(broj, "dvjesto"); break;
            case 3: strcat(broj, "tristo"); break;
            case 4: strcat(broj, "četiristo"); break;
            case 5: strcat(broj, "petsto"); break;
            case 6: strcat(broj, "šeststo"); break;
            case 7: strcat(broj, "sedamsto"); break;
            case 8: strcat(broj, "osamsto"); break;
            case 9: strcat(broj, "devetsto"); break;
            default: desetica(broj, num);
        }
        desetica(broj, num);
}

void desetica(char *broj, long int num)
{
    long int t5 = (num % 100)/10;
    long int t4;
        switch(t5)
        {
            case 0: jedna_tisuca(broj, num); break;
            case 1: {
                        t4 = (num % 10);
                        switch(t4)
                        {
                            case 0: strcat(broj, "deset");break;
                            case 1: strcat(broj, "jedanaest"); break;
                            case 2: strcat(broj, "dvanaest"); break;
                            case 3: strcat(broj, "trinaest"); break;
                            case 4: strcat(broj, "četrnaest"); break;
                            case 5: strcat(broj, "petnaest"); break;
                            case 6: strcat(broj, "šesnaest"); break;
                            case 7: strcat(broj, "sedamnaest"); break;
                            case 8: strcat(broj, "osamnaest"); break;
                            case 9: strcat(broj, "devetnaest"); break;
                        }
                        desetA = 1;
                        break;
                    }

            case 2: strcat(broj, "dvadeset"); break;
            case 3: strcat(broj, "trideset"); break;
            case 4: strcat(broj, "četrdeset"); break;
            case 5: strcat(broj, "pedeset"); break;
            case 6: strcat(broj, "šezdeset"); break;
            case 7: strcat(broj, "sedamdeset"); break;
            case 8: strcat(broj, "osamdeset"); break;
            case 9: strcat(broj, "devedeset"); break;
        }
            jedinica(broj, num);
}

void jedinica(char *broj, long int num)
{
    long int t1 = (num % 10);
    if(desetA)
    {
               return;
    }

    switch(t1)
    {
        case 1:strcat(broj, "jedan");break;
        case 2:strcat(broj, "dva");break;
        case 3:strcat(broj, "tri");break;
        case 4:strcat(broj, "četiri");break;
        case 5:strcat(broj, "pet");break;
        case 6:strcat(broj, "šest");break;
        case 7:strcat(broj, "sedam");break;
        case 8:strcat(broj, "osam");break;
        case 9:strcat(broj, "devet");break;
    }
}


