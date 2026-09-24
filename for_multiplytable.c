/* Multiplication Table (for_multiplication.c)Write a program that takes an integer input from the user and prints its multiplication table up to $10$.*/

#include<stdio.h>
int main(){
    int num;
    printf("enter the multiplication table number");
    scanf("%d",&num);

    printf("****Multiplication table****\n");

    for(int i=1;i<=10;i++){
        printf("%d x %d = %d\n",num,i,num*i);
    }
    return 0;
}