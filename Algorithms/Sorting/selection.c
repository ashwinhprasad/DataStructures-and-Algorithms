#include<stdio.h>
#include<limits.h>

int main(){
    int n,temp,min,k;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Etner the array elements\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    // selection sort
    for(int i=0;i<n;i++){
        min = INT_MAX;
        for(int j=i;j<n;j++){
            if(arr[j] < min){
                min = arr[j];
                k = j;
            }
        }
        temp = arr[i];
        arr[i] = min;
        arr[k] = temp;
    }



    printf("After sorting:\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}