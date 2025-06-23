#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int> &arr, int n){
    for(int i = 0; i < n; i++){
        int temp = arr[i];
        int j = i - 1;

        for(;j >= 0; j--){
            if(arr[j] > temp){
                arr[j+1]=arr[j]; // shift
            }
            else{
                break; // stop
            }
        }

        arr[j+1] = temp;
    }
}

int main(){
    vector<int> arr = {10, 1, 7, 4, 8, 2, 11};
    int n = arr.size();
    insertionSort(arr,n);
    for(int i = 0; i < n; i++){
        cout << arr[i] << ' ';
    }
    return 0;
}