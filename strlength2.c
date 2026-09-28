//string length using the built in data type

#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("enter the string");
    scanf("%s",str);

    int length=strlen(str);

    printf("%d",length);

}