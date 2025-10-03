#include <stdio.h>

int main()
{
    float arr_a[2][2];
    float arr_b[2][2];
    float arr_sum[2][2];

    printf("Enter the elements of the first array: \n");
    printf("Enter a(1,1): ");
    scanf("%f",&arr_a[0][0]);
    printf("Enter a(1,2): ");
    scanf("%f",&arr_a[0][1]);
    printf("Enter a(2,1): ");
    scanf("%f",&arr_a[1][0]);
    printf("Enter a(2,2): ");
    scanf("%f",&arr_a[1][1]);

    printf("Enter the elements of the second array: \n");
    printf("Enter b(1,1): ");
    scanf("%f",&arr_b[0][0]);
    printf("Enter b(1,2): ");
    scanf("%f",&arr_b[0][1]);
    printf("Enter b(2,1): ");
    scanf("%f",&arr_b[1][0]);
    printf("Enter b(2,2): ");
    scanf("%f",&arr_b[1][1]);

    arr_sum[0][0] = arr_a[0][0] + arr_b[0][0];
    arr_sum[0][1] = arr_a[0][1] + arr_b[0][1];
    arr_sum[1][0] = arr_a[1][0] + arr_b[1][0];
    arr_sum[1][1] = arr_a[1][1] + arr_b[1][1];

    printf("The Sum Array: \n");
    printf("%0.2f \t %0.2f \n%0.2f \t %0.2f",arr_sum[0][0],arr_sum[0][1],arr_sum[1][0],arr_sum[1][1]);
}
