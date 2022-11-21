//isPalindrome, isArmstrong - loop
#include "NumClass.h"
#include <math.h>
#include <stdio.h>
#define false 0
#define true 1

int isArmstrong(int x)
{
    int i=0; 
    int sum=0; 
    int y=x;
    int z=x;
    while(y>0){ //loop to know the number of digits-i
        y=y/10;
        i++;
    }
    //printf("m is: %d\n", m) ;
     //loop take the last digit and pow in num of digit and than add to sum
     //divie by 10 to increase the lasr digit
    while(z>0){ 
        int m=z%10;
        sum+= pow(m,i);
        z=z/10;
    }
    //is Amstrong number
    if (sum==x){
        return true;}
   
    return false;
}

int isPalindrome(int x){
    int n=0; //num of digit
    int y=x;
    while(y>0){ //loop to know the number of digits-n
        y=y/10;
        n++;
    }
    if (n==1){
        return true; }
    //loop take the last and first digit and compare them
    while(n>1){
        int right=x%10; 
        int mod = pow(10,n-1); 
        int left=x/mod ; 
     //  is not a palindrome
        if (left!=right){
            return false; 
        }
        x= x%mod; 
        x= x/10; 
        n=n-2; 
    }


    return true;
}