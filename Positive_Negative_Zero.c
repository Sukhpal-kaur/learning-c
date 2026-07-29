#include <stdio.h>

int main()
{
    int num = -5;

    if (num > 0)
    {
        printf("%d is Positive.", num);
    }
    else if (num < 0)
    {
        printf("%d is Negative.", num);
    }
    else
    {
        printf("The number is Zero.");
    }

    return 0;
}