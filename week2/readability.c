#include <stdio.h>
#include <cs50.h>
#include <math.h>
#include <string.h>

int main(void)
{
    string text = get_string("inter your text:");

    float a = 0;
    float b = 1;
    float c = 0;
    for (int i = 0; i < strlen(text) ; i++)
    {
        //counting letters
        if (text[i] >= 'a' & text[i] <= 'z' || text[i] >= 'A' & text[i] <= 'Z')
        {
            a++;
        }
        //counting words

        if (text[i] == ' ')
        {
            b++;
        }
        //counting Sentences

        if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            c++;
        }

    }

    //calculation L & S
    float l = (a / b) * 100;
    float s = 100 / (b / c);


    //Coleman-Liau index
    int grade = round((0.0588 * l) - (0.296 * s) - 15.8);


    //finally answer
    if (grade > 16)
    {
        printf("Grade 16+\n");
    }
    else if (grade < 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        printf("Grade %i\n", grade);
    }
}



