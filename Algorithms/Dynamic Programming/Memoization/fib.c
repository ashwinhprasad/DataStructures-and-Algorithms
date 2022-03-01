#include<stdio.h>

int fib(int n,int arr[]){

    if(n == 1 || n == 0){
        arr[n] = n;
        return arr[n];
    }

    if(arr[n] != -1){
        return arr[n];
    }

    arr[n] = fib(n-1,arr) + fib(n-2,arr);
    return arr[n];
}


int main(){
    int n,arr[10];
    scanf("%d",&n);

    for(int i=0;i<10;i++){
        arr[i] = -1;
    }

    n = fib(n,arr);
    printf("the answer is : %d\n",n);
    return 0;
}