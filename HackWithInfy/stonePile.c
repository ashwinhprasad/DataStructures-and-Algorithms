/*
There are three piles of stones. The first pile contains a stones, the second pile contains b stones and the third pile contains c stones. You must choose one of the piles and split the stones from it to the other two piles; specifically, if the chosen pile initially contained s stones, you should choose an integer k (0≤k≤s), move k stones from the chosen pile onto one of the remaining two piles and s−k stones onto the other remaining pile. Determine if it is possible for the two remaining piles (in any order) to contain x stones and y stones respectively after performing this action.

Input:
a,b,c, x and y.

Output:
"YES" or "NO"
*/

#include<stdio.h>

int main(){

    int a,b,c,x,y,flag=0;
    scanf("%d %d %d %d %d",&a,&b,&c,&x,&y);

    //chosing a
    if(a+b+c >= x+y && b+c <= x+y && b<=x && c <= y){
        printf("YES");
        flag=1;
        return 0;
    }

    //chosing b
    if(a+b+c >= x+y && a+c <= x+y && a<=x && c <= y){
        printf("YES");
        flag=1;
        return 0;
    }

    //chosing b=c
    if(a+b+c >= x+y && a+b <= x+y && a<=x && b<= y){
        printf("YES");
        flag=1;
        return 0;
    }

    if(flag==0){
        printf("NO");
    }

    return 0;
}
