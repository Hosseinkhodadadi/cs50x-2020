#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{

// for get & check user key

    if (argc == 2)
    {
        bool a = true;
        for (int i = 0; i < strlen(argv[1]); i++)
        {
            // To reject non-numeric values
            if (argv[1][i] > '9' || argv[1][i] < '0')
            {
                a = false;
                break;
            }
        }
        if (a == true)  // Execute encryption
            // this section only applies if the key is correct
        {
            int key = atoi(argv[1]) % 26;    //To convert string to int
            string ptext = get_string("inter plaintext: ");  //get plaintext from user
            int chars = strlen(ptext);
            char ctext[chars + 1];
            ctext[chars] = '\0';

            for (int j = 0; j < strlen(ptext); j++)
                //write cipher text string
            {
                if ((ptext[j] >= 'a' && ptext[j] <= 'z') && ((int) ptext[j] + key <= 122))
                {
                    ctext[j] = (char)((int) ptext[j] + key);
                }
                else if ((ptext[j] >= 'A' && ptext[j] <= 'Z') && ((int) ptext[j] + key <= 90))
                {
                    ctext[j] = (char)((int) ptext[j] + key);
                }
                else if ((ptext[j] >= 'A' && ptext[j] <= 'Z') && ((int) ptext[j] + key > 90))
                {
                    ctext[j] = (char)((int) ptext[j] + key - 26);
                }
                else if ((ptext[j] >= 'a' && ptext[j] <= 'z') && ((int) ptext[j] + key > 122))
                {
                    ctext[j] = (char)((int) ptext[j] + key - 26);
                }
                else
                {
                    ctext[j] = (char)((int) ptext[j]);
                }
            }
            printf("ciphertext: %s\n", ctext);
            return 0;
        }
        else    // "non-numeric values" error
        {
            printf("usage: %s key\n", argv[0]);
            return 1;
        }
    }
    else
    {
        // "argc[] value greater than 2" error
        printf("usage: %s key\n", argv[0]);
        return 1;
    }
}