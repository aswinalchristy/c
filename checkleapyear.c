//(Take a 4-digit year as input and determine whether it is a Leap Year or not.)

#include<stdio.h>
int main(){
    int year;
    printf("enter the 4 digit year");
    scanf("%d",&year);

    if((year%4==0 && year%100!=0)||(year%400==0)){
        printf("leap year!");
    }else{
        printf("Not a leap year");
    }
    return 0;
}