#include <iostream>
#include <stack>
using namespace std;

class Stack{
    public:
        int *arr;
        int top;
        int size;

        Stack(int size){
            this -> size = size;
            int arr = new arr[size];
            int top = -1;
        }

        void push(int element){
            if(size-top>1){
                top++;
                arr[top]=element;
            }
            else{
                cout << "Stack Overflow" << endl;
            }
        }

        void pop(){
            if(top>=0){
                top--;
            }
            else{
                cout << "Stack Underflow" << endl;
            }
        }

        int peek(){
            if(top>=0){
                return arr[top];
            }
            else{
                cout << "Stack is empty" << endl;
                return -1;
            }
        }

        bool isEmpty(){
            if(top == -1){
                return true;
            }
            else{
                return false;
            }
        }
};

int main(){
    // stack<int> s;
    // s.push()
    return 0;
}