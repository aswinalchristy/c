/*Find the Maximum Element (array_max.c)
Write a program that takes 5 integers from the user, stores them in an array, and finds the largest (maximum) number among them.*/

#include<stdio.h>

int main(){
    int arr[5];

    printf("enter 5 elements");

    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    int max=0;
    
    for(int i=0;i<5;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    printf("The largest number is %d",max);
}