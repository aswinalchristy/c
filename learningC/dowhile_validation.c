/*Strict Range Validation 
Write a program that keeps asking the user to enter a percentage mark between 0 and 100.

If the user enters a negative number or a number greater than 100 (e.g., -5 or 150), print an error message and force them to re-enter until they provide a valid mark.*/

#include<stdio.h>

int main(){
    int mark;

    do{
        printf("enter a percentage mark between 0 and 100: ");
        scanf("%d",&mark);

        if(mark<0 || mark>100){
            printf("\nerror! the mark must be between 0 and 100\n");
        }
    }
    while(mark<0 || mark>100);
    printf("\nValid mark accepted %d",mark);
    return 0;
}

