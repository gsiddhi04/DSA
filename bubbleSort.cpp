#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int> &arr, int n){
    
    for(int i = 0; i < n-1; i++){  // rounds count
        bool swapped = false;    // For optimisation
        for(int j=0; j < n-i-1; j++){   // for processing element
 
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }

        }

        if(swapped==false){
            // already sorted
            break;
        }

    }
}

int main(){
    vector<int> arr = {10, 1, 7, 6, 14, 9};
    int n = arr.size();
    bubbleSort(arr,n);
    for(int i = 0; i < n; i++){
        cout << arr[i] << ' ';
    }
    return 0;
}