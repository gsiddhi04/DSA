#include <iostream>
#include <vector>
using namespace std;
//First and last position in a sorted array
int firstOccurrance(vector<int>& arr, int n, int k){
    int start = 0;
    int end = n - 1;
    int mid = (start + end)/2;
    int temp = 0;

    while(start<=end){
        if(arr[mid]==k){
            temp = mid;
            end = mid - 1;
        }
        else if(k > arr[mid]){
            start = mid + 1;
        }
        else if(k < arr[mid]){
            end = mid - 1;
        }
        mid = (start + end)/2;
    }
    return temp;
}
int lastOccurrance(vector<int>& arr, int n, int k){
    int start = 0;
    int end = n - 1;
    int mid = (start + end)/2;
    int temp = -1;

    while(start<=end){
        if(arr[mid]==k){
            temp = mid;
            start = mid + 1;
        }
        else if(k > arr[mid]){
            start = mid + 1;
        }
        else if (k < arr[mid]){
            end = mid - 1;
        }
        mid = (start + end)/2;
    }
    return temp;
}


// Find Total number of Occurance
int totalOccurance(vector<int>& arr, int n, int k){
    int firstIndex = firstOccurrance(arr,n,k);
    int lastIndex = lastOccurrance(arr,n,k);

    int totalOccurance = lastIndex - firstIndex + 1 ;

    return totalOccurance;
}

//Peak Index in a mountain array
int peakIndexMountainArray(vector<int>& arr){
    int start = 0;
    int end = arr.size() - 1;
    int mid = (start + end)/2;

    while(start <= end){
        if(arr[mid] < arr[mid+1]){
            start = mid + 1;
        }
        else{
            end = mid;
        }
        mid = (start + end)/2;
    }
    return 0;
}


int main(){
    vector<int>arr = {0,1,1,2,2,2,2,2};
    int n = arr.size();
    cout << "first index of 2 -> " << firstOccurrance(arr,n,2) << endl;
    cout << "last index of 2 -> " << lastOccurrance(arr,n,2) << endl;

    cout << "total occurrance -> " << totalOccurance(arr,n,1) << endl;

    vector<int>peak = {24,69,100,99,79,78,67,36,26,19};
    cout << "index of peak element -> " << peakIndexMountainArray(peak) << endl;

    vector<int> arr1 = {8,10,17,1,3};
    int index = pivot(arr1);
    cout << "Index with equal prefix and suffix sum: " << index << endl;
    return 0;
}