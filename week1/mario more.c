#include <cs50.h>
#include <stdio.h>

int main(void)
// Get input
{
    int n;
    do
    {
        n = get_int("enter height:");
    }
    while (n < 1 || n > 8);
// print #
    for (int i = 1; i <= n; i++)
    {
        for (int k = n; k > i; k--)
        {
            printf(" ");
        }


        for (int j = 0; j < i; j++)
        {
            printf("#");
        }



        for (int k = i - 1; k <= i; k++)
        {
            printf(" ");
        }


        for (int j = 0; j < i; j++)
        {
            printf("#");
        }

        printf("\n");
    }
}