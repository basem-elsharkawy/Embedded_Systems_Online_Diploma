#include <stdio.h>

void ReverseString();

int main()
{
    printf("Enter a string: ");
    ReverseString();
}
void ReverseString()
{
    char c;
    scanf("%c", &c);
    if (c != '\n')
    {
        ReverseString();
        printf("%c", c);
    }
}
