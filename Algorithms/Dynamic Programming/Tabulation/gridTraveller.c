#include<stdio.h>

int gridTraveller(int m,int n,int arr[m+1][n+1]){

    for(int i=0;i<=m;i++){
        arr[i][0] = 0;
    }

    for(int i=0;i<=n;i++){
        arr[0][i] = 0;
    }

    for(int i=0;i<=m;i++){
        arr[i][1] = 1;
    }

    for(int i=0;i<=n;i++){
        arr[1][i] = 1;
    }

    for(int i=2;i<=m;i++){
        for(int j=2;j<=n;j++){
            arr[i][j] = arr[i-1][j] + arr[i][j-1];
        }
    }
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