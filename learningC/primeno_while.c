/*Problem 33: Check if a Number is Prime using a while LoopProblem Statement:Write a C program that takes a positive integer $N$ ($N > 1$) from the user and determines whether it is a Prime Number using a while loop.A prime number is a number greater than 1 that has no positive divisors other than 1 and itself (e.g., 2, 3, 5, 7, 11, 13...)*/

#include<stdio.h>

int main(){
    int n,i=2,is_prime=1;

    printf("enter the value");
    scanf("%d",&n);

    if(n<=1){
        is_prime=0;

    }else{
        while(i<=n/2){
            if(n%i==0){
            is_prime=0;
            break;
            }
            i++;

        }
        if(is_prime==1){
            printf("The number is prime");
        }else{
            printf("The number is not prime");
        }
    }return 0;

    

}