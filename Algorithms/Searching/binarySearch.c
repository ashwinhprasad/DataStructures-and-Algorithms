#include<stdio.h>

int main(){

    int n,k,flag=0;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter the elements in sorted order\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("Enter the element that you are searching for: ");
    scanf("%d",&k);


    // binary search
    int left=0,right=n-1,mid;
    while(left <= right){
        mid = (left+right)/2;
        if(arr[mid] == k){
            printf("Th element was found at : %d",mid);
            flag = 1;
            break;
        } else if (arr[mid] < k){
            left = mid+1;
        } else {
            right = mid-1;
        }
    }

    if(flag==0){
        printf("The element was not found");
    }

    return 0;
}