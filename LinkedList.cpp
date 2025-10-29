#include <iostream>
using namespace std;

class Node {

    public:
        int data;
        Node* next;

        //Constructor of Node
        Node(int data){
            this -> data = data;
            this -> next = NULL;
        }

        // Destructor
        ~Node(){
            int value = this -> data;
            if(this -> next != NULL){
                //memory free
                delete next;
                this -> next = NULL;
            }
            cout << "Memory has been freed for the value : " << value << endl;
        }
};
// Insertion
void insertAtHead(Node* &head, int data){
    // create a new node
    Node* temp = new Node(data);
    temp -> next = head;
    head = temp;
}

void insertAtTail(Node* &tail, int data){
    //create a new node
    Node* temp = new Node(data);
    tail -> next = temp;
    tail = temp;
}

void insertAtMiddle(Node* &head,  int data){
    Node* temp = new Node(data);
    temp -> next = head -> next;
    head -> next = temp;
}

void insertAtPosition(Node* &tail,Node* &head,int pos, int data){
    if(pos==1){
        insertAtHead(head,data);
        return;
    }

    Node* temp = head;
    int count = 1;
    // traversal
    while(count < pos - 1){
        temp = temp -> next;
        count++;
    }

    if(temp -> next == NULL){
        insertAtTail(tail,data);
        return;
    }
    
    Node* node2 = new Node(data);
    node2 -> next = temp -> next;
    temp -> next = node2;
    
}
// deletion

/*
void deleteAtHead(Node* &head){
    Node* temp = head;
    head = temp -> next;
    temp -> next = NULL;
}
*/

void deleteAtPosition(Node* &head, int pos){
    Node* temp = head;
    int count = 1;
    if(pos==1){
        head = head -> next;
        delete temp;
    }
    // traversal
    while(count < pos - 1){
        temp = temp -> next;
        count++;
    }

    temp -> next = temp -> next -> next;
    temp -> next -> next = NULL;

}
// printing
void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout << temp -> data << ' ';
        temp = temp -> next;
    }
    cout << endl;
}

int main(){

    Node* node1 = new Node(10);
    // cout << node1 -> data << endl;
    // cout << node1 -> next << endl;

    Node* head = node1;   // always points the begining node
    Node* tail = node1;   // always points the ending node
    

    print(head);

    insertAtHead(head,12);
    print(head);

    insertAtTail(tail,20);
    print(head);

    insertAtMiddle(head,19);
    print(head);

    insertAtPosition(tail,head,5,15);
    print(head);

    cout << "head : " << head -> data << endl;
    cout << "tail : " << tail -> data << endl;

    return 0;
}