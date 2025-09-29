#include <stdio.h>

int main()
{
    int userInput,i;
    long long fact = 1.;
    printf("Enter an integer: ");
    scanf("%d",&userInput);
    if(userInput == 0){
        printf("Factorial = 1");
        return 0;
    }
    if(userInput < 0){
        printf("Error! There is no factorial of negative integer");
        return 0;
    }
    for(i=1;i<=userInput;i++){
        fact = fact*i;
    }
    printf("Factorial = %llu",fact);

}
