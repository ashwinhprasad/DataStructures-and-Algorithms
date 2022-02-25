#include<iostream>

using namespace std;

int main(){

    char a[20],stack[20];
    int i=0,top=-1,len;

    cout<<"Enter the expression: ";
    cin>>a;

    while(a[i++] != '\0'){}
    len=i-1;

    for(i=0;i<len;i++){
        if(a[i] == '{' || a[i] == '(' || a[i] == '['){
            top++;
            stack[top] = a[i];
        } else if((a[i] == '}' && stack[top] == '{') 
            || (a[i] == ']' && stack[top] == '[')
            || (a[i] == ')' && stack[top] == '(')
        ) {
            top--;
        }
    }

    if(top == -1){
        cout<<"Balanced"<<endl;
    } else {
        cout<<"Unbalanced"<<endl;
    }

    return 0;
}