/*Problem 18: Month Days Counter
Problem Statement: Take a month number (1 to 12) as input from a user, and display the total number of days in that month using a switch statement.*/

#include<stdio.h>
int main(){
    int month;
    
    printf("enter the choices (1-12) to know the month\n");
    scanf("%d",&month);

    switch(month){
        case 1:
        case 3:
        case 5:      
        case 7:
        case 8:
        case 10:
        case 12:
        printf("31 days");
        break;

        case 4:
        case 6:
        case 9:
        case 11:
        printf("30 days");
        break;

        case 2:
        printf("28 or 29 days");
        break;

        default :
        printf("invalid month");
    
    }
    return 0;
}