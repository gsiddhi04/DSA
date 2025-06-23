#include <iostream>
using namespace std;

int main(){

    int i = 8;
    // pointer to int is created pointing to some garbage address. Bad Practice
    int *pfalse;
    int *p = 0; // do this instead
    p = &i;

    int *q = &i; // or do this both are same

    int num = 5;
    cout << num << endl;

    cout << "Address of num: " << &num << endl;

    int *ptr = &num;

    cout << "Address is : " << ptr << endl;
    cout << "Value is : " << *ptr << endl;

    double d = 4.3;
    double *p2 = &d;

    cout << "Address is : " << p2 << endl;
    cout << "Value is : " << *p2 << endl;

    cout << "Size of integer is:" << sizeof(num) << endl;
    cout << "Size of pointer is:" << sizeof(ptr) << endl;
    cout << "Size of pointer is:" << sizeof(p2) << endl;

    char ch = 'a';
    char *p1 = &ch;

    int num1 = 5;
    int a = num1;
    a++;

    cout << num1 << endl;

    int *pnum = &num1;
    cout << "Before : " << num1 << endl;
    (*pnum)++;
    cout << "After : " << num1 << endl;

    // Copying a pointer
    int *copy = pnum;
    cout << pnum << "<--->" << copy << endl; 
    cout << *pnum << "<--->" << *copy << endl; 

    //important concept
    int *t = &i;
    // cout << (*t)++ << endl;
    *t = *t + 1;
    cout << *t << endl;
    cout << t << endl;
    t = t + 1;    // moves to next memoery that means if it's on 0xbfad1ffd74 then it will move to 0xbfad1ffd78
    cout << t << endl;

    int arr[10]={2,5,6};
    cout << "Address of first memory block: " << arr << endl;
    cout << arr[0]<< endl;
    cout << "Address of first memory block: " << &arr[0] << endl;
    cout << "4th " << *arr << endl;
    cout << "5th " << *arr + 1 << endl;
    cout << "6th " << *(arr + 1) << endl;

    int ash[20]={1,2,3,4,5};
    int *ptr3 = &ash[0];
    cout << ptr3 << endl;
    cout << *ptr3 << endl;
    cout << &ptr3 << endl;
    return 0;
}