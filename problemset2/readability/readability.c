#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <cs50.h>
#include <math.h>
int main(void)
{
    
    string text = get_string("Text: ");
    int letters = 0;
    int words = 0;
    int sentences = 0;

    for (int x = 0; x < strlen(text); x++)
    {
        
        char a = text[x];
        if (isalpha(a) != 0)
        {
            letters++;
        }

        
        if (a == ' ')
        {
            words++;
        }

        
        if (a == '.' || a == '!' || a == '?')
        {
            sentences++;
        }
    }

    
    words = words + 1;

    
    float L = ((float)letters / (float)words) * 100;
    float s = ((float)sentences / (float)words) * 100;
    float subindex = 0.0588 * L - 0.296 * s - 15.8;
    int index = round(subindex);
    if (index > 16)
    {
        printf("Grade 16+\n");
    }
    else if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        printf("Grade %i\n", index);
    }

}