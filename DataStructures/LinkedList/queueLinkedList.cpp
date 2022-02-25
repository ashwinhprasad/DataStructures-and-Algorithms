#include <iostream>

using namespace std;

struct node {

    int elem;
    struct node *next;

};

struct node *front=NULL,*rear=NULL;

//insert element
void enque(int n) {
    
    struct node *temp = new node;

    if(temp == NULL){
        cout<<"Overflow Error"<<endl;
    } else if(rear == NULL) {
        temp->elem = n;
        temp->next = NULL;
        rear = temp;
        front = temp;
    } else {
        temp-> elem = n;
        temp->next = NULL;
        rear->next = temp;
        rear = temp;
    }
}

//delete element
void deque() {

    struct node *temp = new node;

    if (rear == NULL) {
        cout<<"Underflow Error"<<endl;
    } else if (rear == front ) {
        front = NULL;
        cout<<rear->elem<<" is being deleted"<<endl;
        delete rear;
        rear = NULL;
    } else {
        temp = front;
        cout<<front->elem<<" is being deleted"<<endl;
        front = front->next;
        delete temp;
    }
    
}


//display elements
void display() {

    struct node *temp = new node;

    if(rear==NULL){
        cout<<"Underflow Error"<<endl;
    } else {
        temp = front;
        while(temp->next != NULL){
            cout<<temp->elem<<" ";
            temp = temp->next;
        }
        cout<<temp->elem<<endl;
    }
}


int main() {

    while(1){
        
        int ch;
        cout<<"MENU"<<endl;
        cout<<" 1. Enque "<<endl;
        cout<<" 2. Deque "<<endl;
        cout<<" 3. Display "<<endl;
        cout<<" 4. Exit "<<endl;
        cout<<" Enter your Choice :  "<<endl;
        cin>>ch;
        
        switch(ch) {
            
            case 1: {
                int n;
                cout<<"Enter the element to be entered : "<<endl;
                cin>>n;
                enque(n);
                break;
            }

            case 2: {
                deque();
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