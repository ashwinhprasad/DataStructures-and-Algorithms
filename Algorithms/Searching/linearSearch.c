#include<stdio.h>

int main(){

    int n,k,flag=0;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter the elements\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("Enter the element that you are searching for: ");
    scanf("%d",&k);
    
    // linear search
    for(int i=0;i<n;i++){
        if(arr[i] == k){
            printf("The element was found at the index: %d",i);
            flag = 1;
            break;
        }
    }
    if(flag==0){
        printf("The Element was not found");
    }
    return 0;
}