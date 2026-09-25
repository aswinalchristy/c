//sum of array
#include<stdio.h>
int main(){
    int arr[100];
    int n;
    printf("enter the size of the array");
    scanf("%d",&n);
    printf("enter the array elements");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    printf("sum=%d",sum);
    return 0;
}