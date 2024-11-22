#include <stdio.h>

void sum() {
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];  

    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];  
    }

    printf("The Sum is: %d\n", sum);
}


void product() {
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];  

    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  
    }

    int product = 1;
    for (int i = 0; i < n; i++) {
        product *= arr[i]; 
    }

    printf("The product is: %d\n", product);
}

int main() {
    
    sum();
    product();

    return 0;
}
