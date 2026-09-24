#include<stdio.h>
int main(){
    printf("Enter the age:");
    int age;
    scanf("%d",&age);

    if((age>=13 && age<=18)||age>10)
    {printf("teenage");
    }else {
        printf("No");
    }return 0;

}