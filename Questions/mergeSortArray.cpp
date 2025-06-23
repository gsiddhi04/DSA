#include <iostream>
#include <vector>
using namespace std;


vector<int> merge(vector<int> &arr1, vector<int> &arr2, int m, int n){

    int len = m + n;
    vector<int> arr3(len);

    int i = 0; int j = 0;
    int k=0;

    while(i < m && j < n){
        if(arr1[i] < arr2[j]){
            arr3[k++]=arr1[i++];
        }
        else{
            arr3[k++]=arr2[j++];
        }
    }

    while(i < m){
        arr3[k++]=arr1[i++];
    }

    while(j < n){
         arr3[k++]=arr2[j++];
    }

    return arr3;
    
}

void print(vector<int> &arr){

    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << ' ';
    }
    cout << endl;

}

int main(){

    vector<int> arr1 = {1,3,5,7,9};
    vector<int> arr2 = {2,4,6};

    int m = arr1.size();
    int n = arr2.size();

    vector<int> ans = merge(arr1, arr2, m, n);

    print(ans);

    return 0;
}