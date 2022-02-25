#include<iostream>

using namespace std;

int main(){

    int top=-1,i=0,j;
    char a[20],stack[20];
    cin>>a;

    while(a[i] != '\0'){

        if(a[i] == '(' || a[i] == '{' || a[i] == '['){
            stack[++top] = a[i];
        } else if (a[i] == ')'){
            while(stack[top] != '('){
                cout<<stack[top];
                top--;
            }
            top--;
        } else if (a[i] == ']'){
            while(stack[top] != '['){
                cout<<stack[top];
                top--;
            }
            top--;
        } else if (a[i] == '}'){
            while(stack[top] != '{'){
                cout<<stack[top];
                top--;
            }
            top--;
        } else if (a[i] == '/' || a[i] == '*'){

            if(stack[top] == '/' || stack[top] == '*'){
                cout<<stack[top];
                stack[top] = a[i];
            } else {
                top++;
                stack[top] = a[i];
            }

        } else if (a[i] == '+' || a[i] == '-'){
            while(stack[top] == '+' || stack[top] == '-' || stack[top] == '/' || stack[top] == '*'){
                cout<<stack[top];
                top--;
            }
            top++;
            stack[top] = a[i];
        } else {
            cout<<a[i];
        }

        i++;

    }

    for(i=0;i<=top;i++){
        cout<<stack[i]<<"\n";
    }


    return 0;
}