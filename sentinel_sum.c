/*Problem 46: Sentinel Sum (Skip Negative Numbers)
Let's build a practical program that tests both concepts:

Keeps asking the user for positive integers to add to a running total.

If the user enters a negative number, use continue to ignore it (don't add it to total).

If the user enters 0 (our sentinel value), use break to stop the program and display the sum.*/

#include<stdio.h>
int main(){
    int num;
    int sum=0;

    printf("****Sentinel Sum****\n");
    printf("enter positive numbers to add\n");
    printf("enter negative numbers to skip\n");
    printf("enter 0 to quit and get total\n");

    while(1){
        printf("enter a number: \n");
        scanf("\t%d",&num);

        if(num==0){
            printf("0 received...stopping!\n");
            break;
        }
        if(num<0){
            printf("negative number got skipped\n");
            continue;
        }
    sum=sum+num;
        printf("current sum= %d\n",sum);
    }

}