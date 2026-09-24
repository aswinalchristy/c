//Find the Minimum (Smallest) Element in an array.

#include<stdio.h>

int main(){
    int arr[100];
    int n;
    printf("enter the array size");
    scanf("%d",&n);

    printf("enter the array elements");
    for(int i=0;i<n;i++){
     
        scanf("%d",&arr[i]);

    }

    int min=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    printf("The smallest number is %d",min);
    return 0;
}