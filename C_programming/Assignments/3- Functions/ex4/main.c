#include <stdio.h>

int getPower(int base, int exp);

int main()
{
    int base, exp,result;
    printf("Enter base number: ");
    scanf("%d", &base);
    printf("Enter power number ");
    scanf("%d", &exp);
    result = getPower(base, exp);
    printf("%d^%d = %d", base, exp, result);
}

int getPower(int base, int exp)
{
    if (exp != 0)
        return (base * getPower(base, exp - 1));
    else
        return 1;
}
