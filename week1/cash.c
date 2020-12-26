#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float n;
    do
    {
        n = get_float("enter your money:");
    }
    while (n <= 0);

    int cents = round(n * 100);

    int a;
    int b;
    if (cents >= 25)
    {
        a = cents / 25;
        b = cents % 25;
    }
    else if (cents >= 10)
    {
        a = cents / 10;
        b = cents % 10;
    }
    else if (cents >= 5)
    {
        a = cents / 5;
        b = cents % 5;
    }
    else
    {
        a = cents / 1;
        b = cents % 1;
    }


    int c;
    int d;
    if (b >= 10)
    {
        c = b / 10;
        d = b % 10;
    }
    else if (b >= 5)
    {
        c = b / 5;
        d = b % 5;
    }
    else
    {
        c = b / 1;
        d = b % 1;
    }

    int e;
    int f;
    if (d >= 5)
    {
        e = d / 5;
        f = d % 5;
    }
    else
    {
        e = d / 1;
        f = d % 1;
    }

    int g;
    {
        g = f / 1;
    }


    printf("%i\n", a + c + e + g);










}