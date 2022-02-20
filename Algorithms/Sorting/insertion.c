#include<stdio.h>

int main(){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Etner the array elements\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    // insertion sort
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j>0;j--){
            if(arr[j] < arr[j-1]){
                int temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
            }
        }
    }

    printf("After sorting:\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}