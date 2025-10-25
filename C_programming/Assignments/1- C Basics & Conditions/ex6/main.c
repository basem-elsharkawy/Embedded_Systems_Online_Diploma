#include <stdio.h>

int main()
{
   int userInput,sum,i;
   printf("Enter an integer: ");
   scanf("%d",&userInput);
   for(i=0;i<=userInput;i++){
        sum = sum + i;
   }
   printf("Sum = %d",sum);
}
