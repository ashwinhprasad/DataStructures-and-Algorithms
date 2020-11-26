#include<iostream>

using namespace std;

struct node {

    int element;
    struct node *next;

};

struct node *top = NULL;

void push(int n) {

    struct node *temp = new node;

    if( temp == NULL ){
        cout<<"Overflow Error"<<endl;
    } else if( top == NULL){
        temp->element = n;
        temp->next = NULL;
        top = temp;
    } else {
        temp->element = n;
        temp->next = top;
        top = temp;
    }

}

void display() {

    struct node *temp = top;

    if(top == NULL) {
        cout<<"Underflow"<<endl;
    }
    else {
        while(temp != NULL){
            cout<<temp->element<<" ";
            temp = temp->next;
        }

        cout<<endl;
    }
}


void pop() {

    struct node *temp;

    if(top == NULL){
        cout<<"Underflow Error"<<endl;
    } else if(top->next == NULL) {
        delete top;
    } else {
        cout<<top->element<<" is being deleted"<<endl;
        temp = top;
        top = top->next;
        delete temp;
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