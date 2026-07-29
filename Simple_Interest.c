#include <stdio.h>

int main()
{
    float principal, rate, time, simpleInterest;

    principal = 1000;
    rate = 5;
    time = 2;

    simpleInterest = (principal * rate * time) / 100;

    printf("Simple Interest = %.2f", simpleInterest);

    return 0;
}