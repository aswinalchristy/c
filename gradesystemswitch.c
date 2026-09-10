/*Problem 17: Grade Evaluation System
Problem Statement: Write a program that takes a student's grade character (A, B, C, D, or F) as input and prints a description using a switch statement.*/

#include<stdio.h>
int main(){
    char grade;
    printf("enter the grade (A-F)\n");
    scanf(" %c",&grade);
    switch(grade){
        case 'A':
        case 'a':
        printf("passed with distinction you got above 90 marks");
        break;
        case 'B':
        case 'b':
        printf("passed,you got above 80 marks");
        break;
        case 'C':
        case 'c':
        printf("passed,you got above 60 marks ");
        break;
        case 'D':
        case 'd':
        printf("passed,you got above 50 marks");
        break;
        case 'F':
        case 'f':
        printf("failed!");
        break;
        default:
        printf("you entered invalid grade");
    }
    return 0;
}