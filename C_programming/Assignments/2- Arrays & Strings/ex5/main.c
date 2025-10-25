#include <stdio.h>

int main()
{
    int arr[100];
    int elementsNumber;
    int searchValue;
    int i;


    printf("Enter Number of elements: ");
    scanf("%d",&elementsNumber);
    for(i=0;i<elementsNumber;i++){
        printf("Enter element(%d): ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter element to search: ");
    scanf("%d",&searchValue);
    for(i=0;i<elementsNumber;i++){
        if(searchValue == arr[i]){
            printf("Number found at location (%d)",i+1);
            return 0;
        }
    }
    printf("Number not found");
}
