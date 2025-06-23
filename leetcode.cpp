#include <iostream>
#include <string>
#include <vector>
using namespace std;

int maxProduct(int n) {
    int temp = n;
    int result = 1;
    while(n!=0){
        result *= temp%10 ;
        n/10;
    }
    return temp;
}

int main(){
    int n = 31;
    cout << maxProduct(n);
}