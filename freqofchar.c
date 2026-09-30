/*Find Frequency of a Character
Problem Statement: Write a C program to accept a string and a target character from the user, then count how many times that target character appears in the string.*/

#include<stdio.h>
int main(){
    char str[100];
    char target;
    int tar=0;
    int length=0;


    printf("Enter the string : ");
    fgets(str, sizeof(str), stdin);
    while(str[length]!='\0'){
        length++;
    }

    printf("enter the target : ");
    scanf(" %c",&target);

    for(int i=0;i<target;i++){
        if(str[i]==target){
            tar++;
        }

    }
    printf("target count = %d",tar);
}