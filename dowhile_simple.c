/*Guess the Secret Number (do_while_simple.c)*/

#include<stdio.h>
int main(){
    int num;
    printf("*****Secret Number Game*****\n");
   

    do{
        printf("enter the number(1-50)\n");
        scanf("%d",&num);
        if(num!=45){
            printf("Try again!\n");
            
        }
    }
    while(num!=45);
        printf("You got the secret number,The number is %d",num);
}