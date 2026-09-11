/*Problem 24: Multiplication Table of a Given NumberProblem Statement: Write a C program using a while loop that asks the user for a number $N$ and prints its multiplication table up to $10$.*/

#include<stdio.h>
int main(){
    int i=1;
    int tab_num=2;
    int n=10,mul;
    
    while(i<=n){
        mul=i * tab_num ;
        printf("%d x %d = %d\n",i,tab_num,mul);
        i++;



    }return 0;
}