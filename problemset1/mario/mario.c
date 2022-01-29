#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int number;
    do
    {
        number = get_int("Height: ");   
    } 
    while (number > 8 || number < 1);
    
    for (int i = 1; i < number + 1 ; i++)
    {
        for (int k = number; k > i  ; k--)
        {
            printf(" ");
        
        }
        for (int z = 0; z < i ; z++)
        {
            printf("#");
        }
        
        for (int k = 2; k > 0; k--)
        {
            printf(" ");
        }
        for (int y = 1; y <= i; y++)
        {
            printf("#");
        }
      
        printf("\n");  
    }
  
}