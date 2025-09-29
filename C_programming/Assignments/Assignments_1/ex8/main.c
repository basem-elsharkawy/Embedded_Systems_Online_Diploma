#include <stdio.h>

int main()
{
    char operation;
    float x,y,result;
    printf("Enter operation + or - or * or / : ");
    scanf("%c",&operation);
    printf("Enter two operands: ");
    scanf("%f",&x);
    scanf("%f",&y);
    switch(operation){
    case '*':
        result = x*y;
        break;
    case '/':
        result = x/y;
        break;
    case '+':
        result = x+y;
        break;
    case '-':
        result = x-y;
        break;
    default:
        printf("Enter the correct operand");
        return 0;
        break;
    }
    printf("%0.2f %c %0.2f = %0.2f",x,operation,y,result);
}
