#include <stdio.h>
#include "NumClass.h"
#define false 0
#define true 1

int main()
{
    int min,max;
    scanf("%d", &min);
    scanf("%d", &max);
    printf("The Armstrong numbers are:");
    //loop from min nomber to max and check
    for (int i = min; i <= max; i++)
    {
        if(isArmstrong(i)==true)
        {
            printf(" %d",i);
        }
    }
    printf("\n");
    printf("The Palindromes are:");
    //loop from min nomber to max and check
    for (int i = min; i <= max; i++)
    {
        if(isPalindrome(i)==true)
        {
            printf(" %d",i);
        }
    }
     printf("\n");
    printf("The Prime numbers are:");
    //loop from min nomber to max and check
    for (int i = min; i <= max; i++)
    {
        if(isPrime(i)==true)
        {
            printf(" %d",i);
        }
    }
     printf("\n");
    printf("The Strong numbers are:");
    //loop from min nomber to max and check
    for (int i = min; i <= max; i++)
    {
        if(isStrong(i)==true)
        {
            printf(" %d",i);
        }
    }   
    printf("\n");

}