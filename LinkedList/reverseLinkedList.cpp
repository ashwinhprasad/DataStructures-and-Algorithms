#include<iostream>

using namespace std;

class node{
    public:
    int data;
    node* next;
};

node* head = NULL;
node* top;

void insert(int n){
    if(head == NULL){
        top = new node;
        top->data = n;
        top->next = NULL;
        head = new node;
        head->next = top;
    } else {
        node* temp = new node;
        temp->data = n;
        temp->next = NULL;
        top->next = temp;
        top = temp;
    }
}

void reverse(){
    node* temp1 = head->next;
    top = temp1;
    node* temp2 = NULL;
    while(temp1->next != NULL){
        node* temp3 = temp1->next;
        temp1->next = temp2;
        temp2 = temp1;
        temp1 = temp3;
    }
    temp1->next = temp2;
    head->next=temp1;
}

void traverse(){
    if(head == NULL){
        cout<<"Empty"<<endl;
    } else {
        node* temp = head->next;
        while(temp->next != NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<temp->data<<"\n";
    }
}

int main(){

    int ch;
    while(1){
        cout<<"1. Insert "<<endl;
        cout<<"2. Reverse "<<endl;
        cout<<"3. Print "<<endl;
        cout<<"4. Exit "<<endl;
        cout<<"Enter yout choice: ";
        cin>>ch;
        switch(ch){

            case 1:{
                int n;
                cout<<"Enter the element: ";
                cin>>n;
                insert(n);
                break;
            }

            case 2:{
                reverse();
                break;
            }

            case 3:{
                traverse();
                break;
            }

            case 4:{
                cout<<"Terminating..."<<endl;
                exit(0);
            }

            default:{
                cout<<"Invalid Choice..."<<endl;
                break;
            }
        }
    }
    return 0;
}