#include <stdio.h>

int main()
{
    char userInput;
    printf("Enter a character: ");
    scanf("%c",&userInput);
    if((userInput>=65 && userInput<=90) || (userInput>=97 && userInput<=122)){
        printf("%c is an alphabet",userInput);
    }else{
        printf("%c is not an alphabet",userInput);
    }
}
