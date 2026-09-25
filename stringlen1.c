/*Let's move on to calculating String Length without strlen().*/
//for loop
/*#include<stdio.h>
int main(){

char str[100];
int length;

printf("Enter the string");
scanf("%s",str);

for( length=0;str[length]!='\0';length++){
    

}
    printf("length=%d",length);
    return 0;
}*/


//while loop

#include<stdio.h>
int main(){

char str[100];
int length=0;

printf("Enter the string");
scanf("%s",str);

while(str[length]!='\0'){
    length++;
}
printf("length= %d",length);
return 0;
}
