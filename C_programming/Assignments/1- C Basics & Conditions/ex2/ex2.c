#include <stdio.h>

int main(){
    char userInput;
    printf("Enter an alphabet: ");
    scanf("%c",&userInput);
    if(userInput=='a' || userInput=='e' || userInput=='i' || userInput=='o' || userInput=='u'){
        printf("%c is vowel",userInput);
    }else{
        printf("%c is constant",userInput);
    }
}
