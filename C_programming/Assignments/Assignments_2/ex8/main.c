#include <stdio.h>
#include <string.h>

int main()
{
    char inpString[100];
    char revString[100];
    int numChars;
    int i;
    printf("Enter a string: ");
    gets(inpString);
    numChars = strlen(inpString);
    for(i=0;i<numChars;i++){
        revString[i]=inpString[numChars-i-1];
    }
    printf("The reversed string: %s",revString);
}
