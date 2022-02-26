#include<stdio.h>
#include<limits.h>

int min(int x,int y, int z){
    if(x <= y && x <= z){
        return x;
    } else if( y <= z && y <= x){
        return y;
    } else if (z <= x && z <= y){
        return z;
    }
}

int main(){
    int n,arr[20],ans;
    printf("Enter the number: ");
    scanf("%d",&n);

    // base conditions
    arr[0] = 0;
    arr[1] = 0;

    for(int i=2;i<20;i++){
        arr[i] = 1000;
    }

    // dynamic part
    for(int i=2;i<n+1;i++){

        int div2=19,div3=19,sub1=19;

        if(i%2 == 0){
            div2 = i/2;
        }

        if(i%3 == 0){
            div3 = i/3;
        }

        sub1 = i-1;
        arr[i] = min(arr[div2],arr[div3],arr[sub1]) + 1;
        
    }

    for(int i=0;i<n+1;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
