#include<iostream>

using namespace std;

int main(){

    char a[10],num[5];
    int i=0,top=-1,oper1,oper2,j,resNum,stack[20];
    cin>>a;

    while(a[i]!='\0'){
        if(isdigit(a[i])){
            j=0;
            while(isdigit(a[i])){
                num[j++] = a[i++];
            }   
            sscanf(num,"%d",&resNum);
            top++;
            stack[top] = resNum;
        } else if(a[i] == ','){
            i++;
            continue;
        } else {

            oper1 = stack[top];
            top--;
            oper2 = stack[top];

            if(a[i] == '*'){
                stack[top] = oper1*oper2;
            } else if(a[i] == '+') {
                stack[top] = oper1+oper2;
            } else if(a[i] == '-') {
                stack[top] = oper2-oper1;
            } else if(a[i] == '/') {
                stack[top] = oper2/oper1;
            }
            i++;
        }
        for(int k=0;k<=top;k++){
            cout<<stack[k]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}