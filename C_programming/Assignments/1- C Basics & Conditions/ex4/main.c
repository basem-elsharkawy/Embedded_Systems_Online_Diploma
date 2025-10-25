#include <stdio.h>

int main()
{
    float userInput;
    printf("Enter a number: ");
    scanf("%f",&userInput);
    if(userInput > 0.0){
        printf("%0.2f is positive",userInput);
    }else if(userInput < 0.0){
        printf("%0.2f is negative",userInput);
    }else if(userInput == 0.0){
        printf("You Enter zero");
    }
}
