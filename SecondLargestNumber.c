#include<stdio.h>

void Secondlargestelemnt(){

int n;
printf("Enter The size of the array:");
scanf("%d",&n);

int arr[n];
printf("Enter The elements in array \n");

for(int i = 0; i < n; i++){
    scanf("%d",&arr[i]);
}

for(int i = 0; i < n ; i++){
    for(int j = i + 1; j < n ; j++){
        if(arr[i] > arr[j]){
            int temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;

        }
    }
}

for(int i = 0; i <n ; i++){


}

 printf("The second largest element is: %d",arr[n-2]);


}

int main(){

Secondlargestelemnt();

    return 0;
}