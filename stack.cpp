//loading modules
#include<iostream>


using namespace std;

int arr[100],top=-1;

//insert element
void push(int n) {
    if(top==100) {
        cout<<"Overflow Error"<<endl;
    } else {
        top++;
        arr[top] = n;
    }
}

//delete element
void pop() {
    if(top == -1) {
        cout<<"UnderFlow Error"<<endl;
    } else {
        cout<<arr[top]<<" is being deleted"<<endl;
        top--;
    }
}

//display element
void display() {
    if(top==-1){
        cout<<"Stack is empty"<<endl;
    } else {
        for(int i=top;i>=0;i--){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}

int main() {

    while(1){
        
        int ch;
        cout<<"MENU"<<endl;
        cout<<" 1. Push "<<endl;
        cout<<" 2. Pop "<<endl;
        cout<<" 3. Display "<<endl;
        cout<<" 4. Exit "<<endl;
        cout<<" Enter your Choice :  "<<endl;
        cin>>ch;
        
        switch(ch) {
            
            case 1: {
                int n;
                cout<<"Enter the element to be entered : "<<endl;
                cin>>n;
                push(n);
                break;
            }

            case 2: {
                pop();
                break;
            }

            case 3: {
                display();
                break;
            }

            case 4: {
                cout<<"Terminating..."<<endl;
                exit(0);
            }

            default : {
                cout<<"Enter Valid Choice "<<endl;
            }

        }
    }
    
    return 0;
}