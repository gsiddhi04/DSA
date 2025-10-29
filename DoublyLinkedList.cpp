#include <iostream>
using namespace std;

// Creation of doubly linked list
class Node{
    public:
        int data;
        Node* prev;
        Node* next;

        //Constructor of Node
        Node(int data){
            this -> data = data;
            this -> prev = NULL;
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
// Traversal
void print(Node* &head){
    Node* temp  = head ;

    while(temp != NULL) {
        cout << temp -> data << " ";
        temp  = temp -> next;
    }
    cout << endl;
}
int getLength(Node* &head){
    Node* temp  = head ;
    int len = 0;
    while(temp != NULL) {
        len++;
        temp  = temp -> next;
    }
    return len;
}
// Insert at head
void insertAtHead(Node* &head,Node* &tail,int d){
    // empty list
    if(head==NULL){
        Node* temp = new Node(d);
        head = temp;
        tail = temp;  
    }
    else{
        Node* temp = new Node(d);
        temp -> next = head;
        head -> prev = tail;
        head = temp;
    }
}
// Insert at tail
void insertAtTail(Node* &head, Node* &tail, int d){
    if(tail == NULL){
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else{
        Node* temp = new Node(d);
        tail -> next = temp;
        temp -> prev = tail;
        tail = temp;
    }
}
// Insert at any position
void insertAtPosition(Node* &head,Node* &tail,int pos,int d){
    // starting
    if(pos == 1){
        insertAtHead(head,tail,d);
        return;
    }
    // in between
    Node* temp = head;
    int cnt = 0;
    if(cnt < pos-1){
        temp = temp -> next;
        cnt++;
    }
    //inserting at Last Position
    if(temp -> next == NULL) {
        insertAtTail(tail,head,d);
        return ;
    }
    //creating a node for d
    Node* nodeToInsert = new Node(d);

    nodeToInsert ->next = temp -> next;
    temp -> next -> prev = nodeToInsert;
    temp -> next = nodeToInsert;
    nodeToInsert -> prev = temp;
}
// Deletion
int main(){
    return 0;
}