#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c;
    printf("Enter three numbers: ");
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    if(a>b && a>c){
        printf("Largest number = %0.2f",a);
    }else if(b>a && b>c){
        printf("Largest number = %0.2f",b);
    }else if(c>a && c>b){
        printf("Largest number = %0.2f",c);
    }
}
