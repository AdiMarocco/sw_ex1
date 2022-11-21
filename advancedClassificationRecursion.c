//isPalindrome, isArmstrong - recursive
#include "NumClass.h"
#include <math.h>
#include <stdio.h>
#define false 0
#define true 1

int isArmstrong_recursive(int x,int sum, int n){
    if (x==0&&sum==0){
        return true; }
    if (x==0&&sum!=0){return false; }
    int digit=x%10;
    int p= pow(digit,n); 
    if (sum-p<0){
        return false; }
    sum=sum-p;
    x=x/10; 
    return isArmstrong_recursive(x,sum,n); }

int isArmstrong(int x)
{
    int n=0; //num of digits 
    int y=x;
    int sum=x; 
    while(y>0){
        y=y/10;
        n++;
    }
    return isArmstrong_recursive(x,sum,n);
}

//x is the number n is the num of the digits
int isPalindrome_recursive(int x, int n)
{
    if(n<=0) //n%10==0
    {
        return true;}
    int right = x%10;
    int mod = pow(10,n-1); 
    int left = x/mod;
    if(left != right)
    {
        return false; }
    x=x%mod;
    x=x/10;
   return isPalindrome_recursive(x,n-2);
}

int isPalindrome(int x)
{
    int n=0; //num of digit
    int y=x;
    while(y>0){
        y=y/10;
        n++;
    }
    //printf("check \n"); 
    //printf("x is: %d\n", x); 
    return isPalindrome_recursive(x,n);   
}




