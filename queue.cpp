//loading modules
#include<iostream>


using namespace std;

int arr[100],front=-1,rear=-1;

//insert element
void enque(int n) {
    if(rear==100) {
        cout<<"Overflow Error"<<endl;
    } else if(rear == front && rear == -1) {
        rear++;
        front++;
        arr[rear] = n;
    } else {
        rear++;
        arr[rear] = n;
    }
}

//delete element
void deque() {
    if(front == -1 && rear == front) {
        cout<<"UnderFlow Error"<<endl;
    } else if(front == rear){
        cout<<arr[rear]<<" is being deleted"<<endl;
        rear = -1;
        front = -1;
    } else {
        cout<<arr[front]<<" is being deleted"<<endl;
        front++;
    }
}

//display element
void display() {
    if(rear==-1){
        cout<<"Stack is empty"<<endl;
    } else {
        for(int i=front;i<=rear;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
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