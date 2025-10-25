#include <stdio.h>

int getFactorial(int number);

int main()
{
    printf("%d",getFactorial(5));
}

int getFactorial(int number){
    int factorial = 1;
    if(number<=1){
        return factorial;
    }
    factorial = number*getFactorial(number-1);
}
