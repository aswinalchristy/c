//Problem 26: Count Digits in an Integer
//Problem Statement:

//Write a C program using a while loop that asks the user for a positive integer N, counts the total number of digits in N, and prints the count.

#include<stdio.h>

int main(){
    int n;
    int count=0;

    printf("Enter the number:");
    scanf("%d",&n);

    if(n==0){
        count=1;
    }else{
        while(n>0){
        n=n/10;
        count++;
        }
    }
 
  
   printf("The count for the number you entered is: %d",count);
   return 0;
 
}