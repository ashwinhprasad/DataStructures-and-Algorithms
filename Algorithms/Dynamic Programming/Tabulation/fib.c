#include<stdio.h>

int main(){
    int n,arr[10],ans;
    printf("Enter the number: ");
    scanf("%d",&n);

    // base conditions
    arr[0] = 0;
    arr[1] = 1;

    // dynamic part
    for(int i=2;i<n+1;i++){
        arr[i] = arr[i-1] + arr[i-2];
    }
    
    printf("%d",arr[n]);
    return 0;
}