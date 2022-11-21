#include <stdio.h>
#include "NumClass.h"

/*int main()
{
    printf("%d\n",isStrong(145));
    printf("%d\n",isPrime(4));
    printf("%d\n",isArmstrong(1634)); 
    printf("%d\n",isPalindrome(12345321)); 
   

    return 0;
   
}*/
int main()
{
    int min,max;
    scanf("%d", &min);
    scanf("%d", &max);
    printf("The Armstrong numbers are:");
    for (int i = min; i <= max; i++)
    {
        if(isArmstrong(i))
        {
            printf(" %d",i);
        }
    }
    printf("\n");
    printf("The Palindromes are:");
    for (int i = min; i <= max; i++)
    {
        if(isPalindrome(i))
        {
            printf(" %d",i);
        }
    }
     printf("\n");
    printf("The Prime numbers are:");
    for (int i = min; i <= max; i++)
    {
        if(isPrime(i))
        {
            printf(" %d",i);
        }
    }
     printf("\n");
    printf("The Strong numbers are:");
    for (int i = min; i <= max; i++)
    {
        if(isStrong(i))
        {
            printf(" %d",i);
        }
    }   
    printf("\n");

}