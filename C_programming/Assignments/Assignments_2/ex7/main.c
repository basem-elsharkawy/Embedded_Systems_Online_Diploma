#include <stdio.h>
#include <string.h>

int main()
{
    char inputString[100];
    int i;
    int charNum;
    printf("Enter a string: ");
    gets(inputString);
    for(i=0;i<strlen(inputString);i++){
        if(inputString[i] == 0){
            break;
        }
        charNum++;
    }
    printf("Length of string is: %d",charNum);
}
