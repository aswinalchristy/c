/*Copy and Print an Array (array_easy.c)
Write a program that takes 3 numbers from the user, stores them in an array, and prints them to the screen.*/

#include<stdio.h>
int main(){
    int arr[3];

    printf("Enter the 1st number");
    scanf("%d",&arr[0]);

    printf("Enter the 2nd number");
    scanf("%d",&arr[1]);

    printf("Enter the 3rd number");
    scanf("%d",&arr[2]);

    printf("index [0] is %d\n",arr[0]);
    printf("index [1] is %d\n",arr[1]);
    printf("index [2] is %d\n",arr[2]);

    return 0;
}