#include <iostream>
using namespace std;

int main(){
    // Swap two binary numbers
    int a;
    int b;
    cin >> a;
    cin >> b;
    a = a ^ b;
    b = (a ^ b) ^ b;
    a = (a ^ b) ^ b;

    //check if ith bit is set or not
    int n;
    cin >> n;
    if(n & (1<<i)){   // left shift operator
        cout << true;
    }else cout << false;
    if(n>>i & 1 == 0){
        cout << false;
    }else cout << true;
    return 0;
}
