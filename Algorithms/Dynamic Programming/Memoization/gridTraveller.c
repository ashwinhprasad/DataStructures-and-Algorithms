#include<stdio.h>

int gridTraveller(int m, int n, int arr[m+1][n+1]){

    if(m == 0 || n == 0 || m == 1 || n == 1){
        arr[m][n] = m < n ? m : n;
    }

    if(arr[m][n] != -1){
        return arr[m][n];
    }

    arr[m][n] = gridTraveller(m,n-1,arr) + gridTraveller(m-1,n,arr);
    return arr[m][n];
}

int main(){
    int m,n;
    printf("Enter the dimensions: ");
    scanf("%d %d",&m,&n);
    int arr[m+1][n+1];
    for(int i=0;i<=m;i++){
        for(int j=0;j<=n;j++){
            arr[i][j] = -1;
        }
    }
    n = gridTraveller(m,n,arr);
    printf("Total number of ways are: %d\n",n);
    return 0;
}