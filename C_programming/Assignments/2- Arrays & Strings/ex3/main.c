#include <stdio.h>

int main()
{
    int c,r,i,j;
    int arr[10][10];
    int trs[10][10];
    printf("Enter number of rows: ");
    scanf("%d",&r);
    printf("Enter number on columns: ");
    scanf("%d",&c);
    // Enter Array Elements
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("Enter (%d,%d) element: ",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    // Make Transpose
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            trs[j][i]=arr[i][j];
        }
    }
    // Print Entered Array
    printf("The entered array: \n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d \t",arr[i][j]);
        }
        printf("\n");
    }
    // Print Transposed Array
    printf("The transposed array: \n");
    for(i=0;i<c;i++){
        for(j=0;j<r;j++){
            printf("%d \t",trs[i][j]);
        }
        printf("\n");
    }
}
