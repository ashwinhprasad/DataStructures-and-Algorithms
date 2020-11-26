//loading modules
#include <iostream>

using namespace std;

//queue and parameters
int queue[5],rear=-1,front=-1;


//add element
void enque(int n){

    if((rear == 4 && front == 0) || ( rear==front-1 )){
        cout<<"overflow error"<<endl;
    } else if(rear == -1 && front == rear) {
        rear++;
        queue[rear] = n;
        front++;
    } else if(rear == 4 && front != 0) {

        rear = 0;
        queue[rear] = n;

    } else {

        rear++;
        queue[rear] = n;
    }
}

void deque() {

    if(rear == -1 && front == rear) {
        cout<<"Underflow Error"<<endl;
    } else if (rear == front){
        cout<<queue[front]<<" is being deleted"<<endl;
        front = -1;
        rear = -1;
    } else if(front == 4){
        cout<<queue[front]<<" is being deleted"<<endl;
        front = 0;
    } else {
        cout<<queue[front]<<" is being deleted"<<endl;
        front++;
    }

}

void display() {
    
    if(rear == -1 && front==rear){ 
        cout<<"Underflow Error"<<endl;
    } else if (front > rear) {
        for(int i=front;i<5;i++) {
            cout<<queue[i]<<" ";
        }
        for(int i=0;i<=rear;i++){
            cout<<queue[i]<<" ";
        }
        cout<<endl;
    } else {
        for(int i=front;i<=rear;i++){
            cout<<queue[i]<<" ";
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