#include <cs50.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>


int points[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
int c_letters[] = {65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90};
int t_Points [] = {};
int s_letters[] = {97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122};



int score(string word);

int main(void)
{
    
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    
    int score1 = score(word1);
    int score2 = score(word2);

    
    if (score1 > score2)
    {
        printf("Player 1 wins");
    }
    else if (score2 > score1)
    {
        printf("Player 2 wins");
    }
    else
    {
        printf("Tie");
    }
}

int score(string word)
{
    int score = 0;
    for (int i = 0; i < strlen(word); i++)
    {
        if (isupper(word[i]))
        {
            for (int f = 0; f < sizeof(c_letters); f++)
            {
                if (word[i] == c_letters[f])
                {
                    t_Points[i] = points[f];
                    score += t_Points[i];
                }
            }
        }
        else if (islower(word[i]))
        {
            for (int f = 0; f < sizeof(s_letters); f++)
            {
                if (word[i] == s_letters[f])
                {
                    t_Points[i] = points[f];
                    score += t_Points[i];
                }
            }
        }
       
        else
        {
            i += 1;
        }
    }
    return score;

}