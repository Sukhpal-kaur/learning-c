#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Square of %d = %d", num, num * num);

    return 0;
}