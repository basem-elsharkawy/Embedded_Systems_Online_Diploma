#include <stdio.h>

int main(){
    int userInput;
    printf("Enter an integer you want to check: ");
    scanf("%d",&userInput);
    if(userInput%2 == 0){
        printf("%d is even",userInput);
    }else{
        printf("%d is odd",userInput);
    }

}
