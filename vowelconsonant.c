/*Write a C program to accept a string from the user and count the total number of vowels (a, e, i, o, u, both lowercase and uppercase) and consonants.*/


#include<stdio.h>
int main(){
    char str[100];
    int len=0;

    printf("Enter the string");
    scanf("%s",str);

    while(str[len]!='\0'){
        len++;

    }
    int vowels=0;
    int consonants=0;
    for (int i=0;i<len;i++){
    if((str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')||(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')){
        vowels++;
    }else if ((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z')){
        consonants++;
    }
    }
    printf("vowel count= %d\n",vowels);
    printf("consonant count= %d",consonants);
    return 0;
}