/*Count Even Numbers in a Range (count_evens.c)Write a program that asks the user for a number $N$, then counts and prints how many even numbers exist between $1$ and $N$.*/

#include<stdio.h>
int main(){
    int n;
    int count=0;

    printf("enter the number");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        if(i%2==0){
           count++;
        }
       
    }
    printf("There are %d even numbers between the number 1 and %d",count,n);
    return 0;
}