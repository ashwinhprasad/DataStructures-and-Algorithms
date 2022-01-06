#include<iostream>

using namespace std;

class node{
    public:
    int data;
    node* prev;
    node* next;
};

node* front = NULL;
node* rear = NULL;

void addFront(int n){
    if(front == NULL && rear == NULL){
        node* temp = new node;
        temp->data = n;
        temp->prev = NULL;
        temp->next = NULL;
        front=temp;
        rear=temp;
    } else {
        node* temp = new node;
        temp->data = n;
        temp->prev = NULL;
        temp->next = front;
        front->prev = temp;
        front = temp;
    }
}

void addRear(int n){
    if(front == NULL && rear == NULL){
        node* temp = new node;
        temp->data = n;
        temp->prev = NULL;
        temp->next = NULL;
        front=temp;
        rear=temp;
    } else {
        node* temp = new node;
        temp->data = n;
        temp->prev = rear;
        temp->next = NULL;
        rear->next = temp;
        rear = temp;
    }
}

void display(){
    if(front == NULL && rear == NULL){
        cout<<"List Underfow"<<endl;
    } else {
        node* temp = front;
        while(temp != NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
}

void deleteNode(int n){

    if(front == rear ){
        node* temp = front;
        rear = NULL;
        front = NULL;
        delete temp;
    } else {

        int i=0;
        node* temp = front;
        while(temp != NULL && i<n){
            temp = temp->next;
            i++;
        }
        if(temp == front){
            front = front -> next;
            front->prev = NULL;
            delete temp;
        } else if(temp == rear){
            rear = rear -> prev;
            rear-> next = NULL;
            delete temp;
        } else {
            temp->prev->next = temp->next;
            temp->next->prev = temp->prev;
            delete temp;
        }
    }
}


int main(){
    
    int ch,n;
    while(1){
        
        cout<<"1. Add to front"<<endl;
        cout<<"2. Add to back\n";
        cout<<"3. Delete Element\n";
        cout<<"4. Display\n";
        cout<<"5. Exit\n";
        cout<<"Enter your choice: ";
        cin>>ch;

        switch(ch){
            
            case 1:{
                cout<<"Enter Element to be Added at Front: ";
                cin>>n;
                addFront(n);
                break;
            }

            case 2:{
                cout<<"Enter Element to be Added at Rear: ";
                cin>>n;
                addRear(n);
                break;
            }

            case 3:{
                cout<<"Enter the Index to be Deleted: ";
                cin>>n;
                deleteNode(n);
                break;
            }

            case 4:{
                display();
                break;
            }

            case 5: {
                cout<<"terminating..";
                exit(0);
            }

            default: {
                cout<<"Wrong Choice...\n";
            }
        }
    }
    return 0;
}