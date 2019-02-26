#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    if (argc==2)
    {
        string plaintext;

        int L=atoi(argv [1]);

        plaintext= get_string ("plaintext: ");

        printf ("cyphertext: ");
        for (int i=0; i<strlen (plaintext); i++)

        if (isalpha(plaintext[i]))
        {
            if (islower (plaintext[i]))
            {
                printf("%c" , (((plaintext [i]- 97)+ L)%26)+ 97);
            }
            if (isupper (plaintext[i]))
            {
                printf("%c" , (((plaintext[i]-65)+ L)%26)+ 65);
            }
        }
    else
    {
        printf("%c" ,plaintext[i]);
    }
    printf("\n");
    }
    return 0;
}