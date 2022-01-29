#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <cs50.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    else
    {
        
        string k = argv[1];
        for (int i = 0; i < strlen(k); i++)
        {
            if (isdigit(k[i]) == 0)
            {
                printf("Usage: ./caesar key\n");
                return 1;

            }
        }
        

        int myKey = atoi(k);

        
        string plaintext = get_string("Plaintext: ");

        
        for (int i = 0; i < strlen(plaintext); i++)
        {
            if (isupper(plaintext[i]))
            {
                
                plaintext[i] = (plaintext[i] - 65);
                plaintext[i] = (plaintext[i] + myKey) % 26;
                plaintext[i] = (plaintext[i] + 65);
                
            }
            if (islower(plaintext[i]))
            {
                plaintext[i] = (plaintext[i] - 97);
                plaintext[i] = (plaintext[i] + myKey) % 26;
                plaintext[i] = (plaintext[i] + 97);

            }
            if (isalpha(plaintext[i]) == 0)
            {
                plaintext[i] = plaintext[i];
                
            }
        }
        printf("Ciphertext: %s", plaintext);
        printf("\n");

    }

}