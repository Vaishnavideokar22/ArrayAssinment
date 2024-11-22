#include<stdio.h>

void product(){

    int n;
    int product = 1;
    printf("Enter The Size Of the array:");
    scanf("%d",&n);

    int arr[n];
    printf("Enter The elements: \n");

    for(int i = 0 ; i < n ; i++){
        scanf("%d",&arr[i]);
    }

    for(int i = 0; i < n ; i++){
        product *= arr[i];
    }
   
   printf("The prodcut of the array is:%d \n",product);




}

int main(){

    product();

    return 0;
}