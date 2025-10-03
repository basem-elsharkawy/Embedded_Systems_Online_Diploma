#include <stdio.h>

int main()
{
    int arr[100];
    int elementsNumber;
    int modifiedValue;
    int modifiedIndex;
    int i;

    printf("Enter Number of elements: ");
    scanf("%d",&elementsNumber);
    for(i=0;i<elementsNumber;i++){
        printf("Enter element(%d): ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter location to be modified: ");
    scanf("%d",&modifiedIndex);
    printf("Enter value: ");
    scanf("%d",&modifiedValue);
    arr[modifiedIndex-1] = modifiedValue;
    for(i=0;i<elementsNumber;i++){
        printf("%d  ",arr[i]);
    }
}
