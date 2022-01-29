#include <cs50.h>
#include <stdio.h>
int main(void)
{
    long number = get_long("Number:");
    long check = number;
    int basamaks = 0;
    int first2;
    
    while (check > 0)
    {
        if (check < 100 && check >= 10)
        {
            first2 = check;
        }
        basamaks++;
        check /= 10;
    }
    if (basamaks < 12 || basamaks > 17)
    {
        printf("INVALID\n");
    }
    else
    {
        int a = 0;
        int b = 0;
        int c = 0;
    
        while (number < 0)
        {
            a += number % 10;
            number /= 10;
            
            if (number > 0)
            {
                b = (number % 10) * 2;
                c += ((b / 10) + (b % 10));
                number /= 10;
                
            }
        }
        int total = (a + c) % 10;
    
        if (total != 0)
        {
            printf("INVALID\n");
        }
        else if (total == 0)
        {
            if (basamaks == 15 && (first2 == 34 || first2 == 37))
            {
                printf("AMEX\n");
            }
            else if (basamaks == 16 && (first2 <= 55 && first2 >= 51))
            {
                printf("MASTERCARD\n");
            
            }
        
            else if ((basamaks == 13 || basamaks == 16) & (first2 > 39 && first2 < 50))
            {
                printf("VISA\n");
            }
        
            else
            {
                printf("INVALID\n");
            }
            
        }
        
    }
        
    
    
} 