#include <cs50.h>
#include <stdio.h>
#include <math.h>
int main(void)
{
    float numbers;
    do
    {
        numbers = get_float("Change owed:");   
    } 
    while (numbers < 0.0);
  
    int number = round(numbers * 100);
    int sayi = 0;
    while (number >= 25)
    {
      
        number -= 25;
        sayi += 1;
      
    }
    while (number >= 10)
    {
      
        number -= 10;
        sayi += 1;
      
    }
    while (number >= 5)
    {
      
        number -= 5;
        sayi += 1;
      
    }
    while (number >= 1)
    {
      
        number -= 1;
        sayi += 1;
      
    }
      
  
  
    printf("%i \n", sayi);
}