/*Problem: Linear SearchProblem Statement: Write a C program that reads $N$ integer values into an array and accepts one additional integer value as the search element (target). Check if the target exists in the array. If present, print its index position; otherwise, print "Element not found".*/
//linear search

#include<stdio.h>

int main(){
    int arr[100];
    int n;
    int target;
    int foundindex=-1;

    printf("Enter the array size");
    scanf("%d",&n);

    printf("enter the elements");

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("Enter the target element");
    scanf("%d",&target);

    for(int i=0;i<n;i++){
        if(arr[i]==target){
            foundindex=i;
            break;
        }
    }

    if(foundindex!=-1){

        printf("The element is present at the index %d",foundindex);
    }else{
        printf("The element is not found");
    }
}