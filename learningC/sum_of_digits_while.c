/*Problem 27: Sum of Digits in an Integer
Problem Statement:Write a C program using a while loop that asks the user for a positive integer $N$, calculates the sum of its individual digits, and prints the total sum.*/

#include<stdio.h>
int main(){
    int n;
    int sum=0;
    int dig;
    printf("enter the N value:");
    scanf("%d",&n);

    while(n>0){
        dig=n%10;
        sum=sum+dig;
        n=n/10;
    
        
    }
    printf("the sum of the digit is: %d",sum);
    return 0;
}