#include<stdio.h>

void sum(){

int n;
printf("Enter The size of the array :");
scanf("%d",&n);

int sum = 0;

int arr[n];
printf("Enter The elements \n");

for(int i = 0; i < n; i++){
    scanf("%d",&arr[i]);
}

for(int i = 0 ; i < n ; i++){
    sum += arr[i];
}
printf(" The sum of arrry is:%d \n",sum);

}

int main(){

    sum();

    return 0;
}