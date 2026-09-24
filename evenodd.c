//Write a program that takes an integer from the user and checks whether it is EVEN or ODD.

#include<stdio.h>
int main(){
    int num;
    printf("enter the number:");
    scanf("%d",&num);

    if(num%2==0)
    {

        printf("The entered number is even");
    }else{
        printf("The entered number id odd");
    }
    return 0;
}