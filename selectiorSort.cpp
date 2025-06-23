#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int> &arr, int n){
    for(int i = 0; i < n-1; i++){
        int minIndex = i;
        
        for(int j = i + 1; j < n; j++){

            if(arr[j] < arr[minIndex])
                minIndex = j;

        }

        swap(arr[minIndex], arr[i]);
    }
}

int main(){
    vector<int> arr = {6, 2, 8, 4, 10};
    vector<int> arr2 = {4, 3 , 2 , 1};
    int n = arr.size();
    int n2 = arr2.size();
    selectionSort(arr,n);
    selectionSort(arr2,n2);
    for(int i=0; i < n; i++){
        cout << arr[i] <<' ' ;
    }
    cout << endl;
    for(int i=0; i < n2; i++){
        cout << arr2[i] <<' ' ;
    }
    return 0;
}