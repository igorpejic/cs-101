/*alculator - A simple calculator to do basic operators.
Make it a scientific calculator for added complexity*/

#include <stdio.h>

int main()
{
    float num1, num2;
    char c;
    printf("Enter numbers");
    scanf("%f %f", &num1, &num2);
    printf("Insert operation: +, -, *, or /");
    scanf(" %c", &c);
    switch(c){
        case '+': printf("%.2f + %.2f = %.2f\n", num1, num2, num1+num2);break;
        case '-': printf("%.2f - %.2f = %.2f\n", num1, num2, num1-num2);break;
        case '*': printf("%.2f * %.2f = %.2f\n", num1, num2, num1*num2);break;
        case '/': printf("%.2f / %.2f = %.2f\n", num1, num2, num1/num2);break;
        default: printf("wrong symbol\n");
    }
    return 0;
}


