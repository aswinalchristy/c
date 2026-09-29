/*Palindrome Check
Problem Statement: Write a C program to check whether a given string is a palindrome (reads the same forward and backward, like "MADAM", "RACE CAR", or "RADAR").*/

#include<stdio.h>
int main(){
    char str[100];
    int length=0;
    int ispalindrome=1;

    printf("Enter the string");
    scanf("%s",str);

    while(str[length]!='\0'){
        length++;

    }
    int left=0;
    int right=length-1;
    while(left<right){
        if(str[left]!=str[right]){
            ispalindrome=0;
            break;
        }
        left++;
        right--;
    }
    if(ispalindrome==1){
        printf("Palindrome\n");
    }else{

        printf("Not Palindrome");
    }

}