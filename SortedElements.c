#include<stdio.h>

void sortedelements(){

int n;
printf("Enter The size Of the array:");
scanf("%d",&n);

int arr[n];

printf("Enter The elements is array: \n");

for(int i = 0; i < n ; i++){
    scanf("%d",&arr[i]);
}

for(int i = 0 ; i < n ; i++){
    for(int j = i + 1; j < n ; j++){
        if(arr[i] > arr[j]){
            int temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
        }
    }
}

for( int i = 0 ; i < n ; i++){

printf("The Sorted Elements in array is :  %d \n",arr[i]);

}

}


int main(){

sortedelements();
    return 0;
}