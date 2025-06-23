#include <iostream>
using namespace std;

int factorial(int n){
    //base case
    if(n==0){
        return 1;
    }
    // recursive relation
    return n*factorial(n-1);
}

int power(int n){
    //base case
    if(n==0){
        return 1;
    }
    // recursive relation
    return 2*power(n-1);
}

int fibonacci(int n){
    // base case
    if(n==0) return 1;
    if(n==1) return 1;
    return fibonacci(n-1)+fibonacci(n-2);
    
}

void counting(int n){
    // base case
    if(n==0){
        return;
    }

    //recursive relation 
    cout << n << endl;
    counting(n-1);
}

//Say digits
void sayDigits(int n){
    string dig[10]={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
    // Base case
    if(n==0){
        return;
    }
    int digit = n%10;
    
    sayDigits(n/=10);
    cout << dig[digit] << ' ';
}

// The OG Combo of Recurssion and Binary Search

int main(){
    int num = 412;
    // cout << factorial(num) << endl;
    // cout << power(num) << endl;
    // counting(num);
    // cout << fibonacci(num) << endl;
    sayDigits(num);
    return 0;
}