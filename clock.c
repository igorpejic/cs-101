/* Alarm Clock - A simple clock where it plays a sound after X 
 * number of minutes/seconds or at a particular time.*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <signal.h>
#include <stdint.h>

volatile int a;
void ALARMhandler(int sig)
{
    --a;
    alarm(1);
}
int main()
{
    printf("Please enter number of seconds in which you want alarm\n");
    scanf("%d", &a);
    signal(SIGALRM, ALARMhandler);

    alarm(1);
    while(a)
    {
        printf("%d\n",a);
        sleep(1);
    }
    system("audacious file.mp3");
    printf("done\n");
    return 0;
}


