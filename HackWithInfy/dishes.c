/*
Ramu has N dishes of different types arranged in a row: A1,A2,…,AN where Ai denotes the type of the ith dish. He wants to choose as many dishes as possible from the given list but while satisfying two conditions:
He can choose only one type of dish.
No two chosen dishes should be adjacent to each other.
Ramu wants to know which type of dish he should choose from, so that he can pick the maximum number of dishes.
Given N= 9 and A= [1,2,2,1,2,1,1,1,1]
For type 1, Ramu can choose at most four dishes. One of the ways to choose four dishes of type 1 is A1,A4, A7 and A9.
For type 2, Ramu can choose at most two dishes. One way is to choose A3 and A5.
So in this case, Ramu should go for type 1, in which he can pick more dishes.
*/

#include<stdio.h>

int main(){
    int n,step=1,max=0,max_temp=0,count,elem;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(max < arr[i]){
            max = arr[i];
        }
    }
    int brr[max];
    for(int i=1;i<=max;i++){
        count=0;
        for(int j=0;j<n;j++){
            if(step == 1 && arr[j] == i){
                count++;
                step=0;
            } else {
                step = 1;
            }
        }
        brr[i-1] = count;
    }
    
    for(int i=0;i<max;i++){
        if(max_temp < brr[i]){
            max_temp = brr[i];
            elem = i+1;
        }
    }
    printf("%d",elem);
    return 0;
}