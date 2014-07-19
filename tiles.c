/*Find Cost of Tile to Cover W x H Floor - Calculate the total cost of tile it would take to cover a floor plan of width and height, 
 *using a cost entered by the user.*/

#include <stdio.h>
int main()
{
   float cost, w, h;
    printf("enter the cost of tiles/m^2\n");
    scanf("%f", &cost);
    printf("enter the measuers width and height\n");
    scanf("%f %f", &w, &h);
    printf("Cost is %.2f", cost*(w*h)); 
    return 0;
}

