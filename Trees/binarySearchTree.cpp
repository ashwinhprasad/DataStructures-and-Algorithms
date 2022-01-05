//loading the modules
#include<iostream>

using namespace std;

//structure
struct node {

    int elem;
    struct node* left;
    struct node* right;

};

struct node* head = NULL;

//inserting element
void insert(struct node* head,int n) {

    if(head == NULL){
        cout<<"head"<<endl;
        struct node* temp = new node;
        temp->elem = n;
        temp->left = NULL;
        temp->right = NULL;
        head = temp;
        cout<<head->elem<<endl;
    }
    else {
        if(n > head->elem && head->right != NULL){
            cout<<"a"<<endl;
            insert(head->right,n);

        } else if ( n < head->elem && head->left != NULL ){
            cout<<"b"<<endl;
            insert(head->left,n);

        } else if (n > head->elem && head->right == NULL){

            cout<<"right"<<endl;
            struct node* temp = new node;
            temp->left=NULL;
            temp->elem = n;
            temp->right = NULL;
            head->right = temp;

        } else if (n < head->elem && head->left == NULL){

            cout<<"left"<<endl;
            struct node* temp = new node;
            temp->left=NULL;
            temp->elem = n;
            temp->right = NULL;
            head->left = temp;

        }
    }
}


void display(struct node* head){

    if(head == NULL){

        cout<<"Underflow Error"<<endl;

    } else{

        cout<<head->elem<<endl;
        
        if(head->left != NULL || head->right != NULL){

            if(head->left != NULL) {

                display(head->left);

            } 
            if (head -> right != NULL) {

                display(head->right);

            }
        }
    }
}



int main() {
    while(1){
        int ch;
        cout<<"____MENU____"<<endl;
        cout<<"  1. Insert "<<endl;
        cout<<"  2.display "<<endl;
        cout<<"  3. exit  "<<endl;
        cout<<" Enter your Choice "<<endl;
        cin>>ch;
        switch(ch){
            case 1:{

                int n;
                cout<<"Enter the number : ";
                cin>>n;
                insert(head,n);
                break;

            }

            case 2:{

                display(head);
                break;

            }

            case 3:{

                cout<<"Terminating...."<<endl;
                exit(0);

            }
            
            default:{

                cout<<"Invalid Choice"<<endl;

            }
        }
    }
    return 0;
}