/*Countdown Timer (do_while_countdown.c)
Write a program that takes a positive integer from the user and counts down to 1 using a do-while loop, followed by printing "Liftoff!".*/

#include<stdio.h>

int main(){
    int count;

    printf("enter the number that you want to start for counting: ");
    scanf("%d",&count);

    do{
        printf("%d \n",count);
        count--;
    }while(count>0);

    printf("time's up!");
}