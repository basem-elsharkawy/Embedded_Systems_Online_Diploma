#include <stdio.h>

int main()
{
    float arr[100];
    float avr = 0;
    int numberInput,i,j;
    printf("Enter number of elements: ");
    scanf("%d",&numberInput);
    for(i=0;i<numberInput;i++){
        printf("Enter (%d) number: ",i+1);
        scanf("%f",&arr[i]);
    }
    for(j=0;j<=i;j++){
        avr = avr + arr[j];
    }
    printf("The average = %0.2f",avr/numberInput);
}
