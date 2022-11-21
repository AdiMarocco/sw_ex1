#include "NumClass.h"
#include <math.h>
#include <stdio.h>
#define false 0
#define true 1

//function to calculate the factorial
int Factorial(int x)
{
    int i=x;
    int sum=1; 
    while (i>0){ //loop i*(i-1)*...*1
        sum*=i;
        i--;
    }
    return sum; 
}

int isStrong(int x)
{
    int sum = 0; 
    int y=x; 
    while(y>0){
        int digit = y%10; //return the modolo of the number
        sum+=Factorial(digit); 
        y=y/10; 
        if(sum>x){ 
            return false;}
    }
    if (sum==x){ //in the end if sum equal to the x - strong number
            return true;}
return 0; } //else its not a strong number


int isPrime(int x)
{
    int d = sqrt(x); //run till the squre of x according to rule 
    if (x==1){
        return 1;} //1 is prime in this work
    for(int i=2; i<d; i++){
        if(x%i==0){ 
            return false;}
    }
    return true;
}