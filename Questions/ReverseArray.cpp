#include <iostream>
#include <vector>
using namespace std;

vector<int> reverse(vector<int> &arr){
    int s = 0;
    int e = arr.size() - 1;

    while(s < e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }

    return arr;
}

// reversing from a particular index

vector<int> reverseArray(vector<int> &arr, int m){
    int s = m + 1;
    int e = arr.size() - 1;
    vector<int> rev = arr;
    while(s <= e){
        swap(rev[s],rev[e]);
        s++;
        e--;
    }

    return rev;
}


void print(vector<int> &arr){
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << ' ';
    }
    cout << endl;
}

int main(){
    vector<int> v;

    v.push_back(11);
    v.push_back(7);
    v.push_back(3);
    v.push_back(12);
    v.push_back(4);

    vector<int>rev = reverseArray(v,3);
    print(rev);

    vector<int> ans =  reverse(v);
    print(ans);
    

    return 0;
}