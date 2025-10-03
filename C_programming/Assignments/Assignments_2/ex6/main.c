#include <stdio.h>
#include <string.h>

int main()
{
    char stringInput[100];
    char frqChar;
    int stringLenght;
    int i;
    int charFrqNumber;
    printf("Enter a string: ");
    gets(stringInput);
    printf("Enter a character to get it's frequency: ");
    scanf("%c",&frqChar);
    stringLenght = strlen(stringInput);
    for(i=0;i<stringLenght;i++){
        if(stringInput[i] == frqChar){
            charFrqNumber++;
        }
    }
    printf("The character \"%c\" appeared %d times",frqChar,charFrqNumber);
}
