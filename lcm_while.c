/*Problem 32: Find the LCM (Least Common Multiple) of Two Numbers

Problem Statement:
Write a C program using a while loop that takes two positive integers from the user and calculates their LCM (Least Common Multiple).*/

#include<stdio.h>

int main(){
    int a,b,orig_a,orig_b,lcm;

    printf("enter the value of a & b : \n");
    scanf("%d %d",&a,&b);

    orig_a=a;
    orig_b=b;

    while(a!=b){
        if(a>b){
            a=a-b;
        }else{
            b=b-a;
        }
       

    }
    lcm=orig_a*orig_b/b;
    printf("The lcm of the numbers %d and %d is : %d ",orig_a,orig_b,lcm);
     
    return 0;
}