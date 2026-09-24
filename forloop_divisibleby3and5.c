/* Write a program that takes a number $N$ from the user and counts how many numbers between $1$ and $N$ are divisible by both 3 AND 5 (for example, numbers like 15, 30, 45...)*/

#include<stdio.h>
int main(){
    int n;
    int count=0;

    printf("enter the n value");
    scanf("%d",&n);


    for(int i=1;i<=n;i++){
        if(i%3==0 && i%5==0){
            count++;
        }
    }
    printf("There are %d numbers are divisible by both 3 and 5",count);

}
