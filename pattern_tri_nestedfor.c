/*Right-Angled Triangle Pattern (pattern_triangle.c)
Write a program that takes an integer N (number of rows) from the user and prints a right-angled triangle pattern of asterisks (*).*/

#include<stdio.h>
int main(){
    int row;

    printf("Enter the number of rows");
    scanf("%d",&row);

    for(int i=1;i<=row;i++) //outer loop ie) i  controls rows
    {
        for(int j=1;j<=i;j++) //inner loop ie) j controls columns
        {
            printf("* ");
        }
        printf("\n");
    }
    
}