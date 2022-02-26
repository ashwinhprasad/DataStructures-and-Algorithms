#include<stdio.h>

int min(int x,int y, int z){
    if(x <= y && x <= z){
        return x;
    } else if( y <= z && y <= x){
        return y;
    } else if (z <= x && z <= y){
        return z;
    }
}



int minSteps(int n,int arr[]){

    if(n == 1){
        arr[n] = 0;
        return arr[n];
    }

    if(arr[n] != -1){
        return arr[n];
    }

    if(n%3 == 0 && n%2 == 0){
        arr[n] = min(minSteps(n/3,arr),minSteps(n/2,arr),minSteps(n-1,arr)) + 1;
    } else if (n%3==0){
        arr[n] = minSteps(n/3,arr) <= minSteps(n-1,arr) ? arr[n/3] + 1 : arr[n-1]  + 1;
    } else if(n%2==0){
         arr[n] = minSteps(n/2,arr) <= minSteps(n-1,arr) ? arr[n/2]+1 : arr[n-1]  + 1;
    } else {
        arr[n] = minSteps(n-1,arr) + 1;
    }
    return arr[n];
}


int main(){
    int n,arr[10];
    scanf("%d",&n);

    for(int i=0;i<10;i++){
        arr[i] = -1;
    }

    n = minSteps(n,arr);
    printf("the answer is : %d\n",n);
    return 0;
}