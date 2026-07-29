#include <stdio.h>

int main()
{
    int a = 25, b = 40, c = 35;

    if (a >= b && a >= c)
    {
        printf("%d is the largest number.", a);
    }
    else if (b >= a && b >= c)
    {
        printf("%d is the largest number.", b);
    }
    else
    {
        printf("%d is the largest number.", c);
    }

    return 0;
}