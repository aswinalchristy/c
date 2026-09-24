
/*Problem 30: Check if a Number is an Armstrong Number
Problem Statement:Write a C program using a while loop that asks the user for a 3-digit positive integer $N$ and checks whether it is an Armstrong Number (also known as a Narcissistic number).
An Armstrong number for a 3-digit integer is a number where the sum of the cubes of its individual digits equals the number itself:*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int n,orig_n,dig;
    int digits=0;
    int sum=0;

    printf("enter the n value\n");
    scanf("%d",&n);

    orig_n=n;
    while(n>0){

        n=n/10;
        digits++;
    }
    n=orig_n;

    while(n>0){
        dig=n%10;
        sum=sum+ round(pow(dig,digits));
        n=n/10;
    }if(sum==orig_n){
        printf("the number %d is Armstrong",orig_n);

    }else {
        printf("The number %d is Not Armstrong",orig_n);
    }
    return 0;
}