#include<stdio.h>

void searching(){

    int n;
    printf("Enter The Size Of the array:");
    scanf("%d",&n);

    int arr[n];

    for(int i = 0; i < n ; i++){
        scanf("%d",&arr[i]);
    }

    int searchelement;
    printf("Enter The Element:");
    scanf("%d",&searchelement);

    int abc = 0;

    for(int i = 0; i < n ; i++){
        if(searchelement == arr[i]){
            abc = 1;
            break;
        }
    }

    if(abc == 1){
        printf("The element is in the array \n");
    }
    else{
        printf("The element is no in the array \n");
    }
}

int main(){

    searching();

    return 0;
}