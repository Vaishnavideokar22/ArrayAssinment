#include<stdio.h>

void median(){

int n;
printf("Enter The size of array:");
scanf("%d",&n);

int count = 0;

int arr[n];

printf("Enter The elements in the array \n");

for(int i = 0 ; i < n ; i++){
    scanf("%d",&arr[i]);
}

  for(int i = 0; i < n ; i++){

  printf("The elemnts is: %d \n",arr[i]);

}

    int ans = n / 2;

    if( n % 2 == 0){
        printf("The Median is: %d \n", arr[ans-1]);
    }

    if(n % 2 != 0){
        printf(" The Median is:%d \n",arr[ans]);
    }



}

int main(){

median();

    return 0;
}