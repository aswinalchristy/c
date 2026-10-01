/*In-Place String Reversal
Problem Statement: Write a C program to reverse a string in-place (without creating a second array).*/

#include<stdio.h>
int main(){
    char str[100];
    char temp;
    int length=0;
    printf("enter the string");
    scanf("%s",str);

    while(str[length]!='\0'){
        length++;

    }
    int left=0;
    int right=length-1;
    
        while(left<right){

            temp=str[left];
            str[left]=str[right];
            str[right]=temp;

        
        left++;
        right--;
        }
    printf("Reversed String : %s",str);


}