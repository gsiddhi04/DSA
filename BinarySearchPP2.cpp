#include <iostream>
using namespace std;

int binarySearch(int arr[], int s, int e, int key){
    int start = s;
    int end = e;

    int mid = (start + end)/2;
    while(start <= end){
        if(arr[mid]==key){
            return mid;
        }
        //go to right part
        if(key > arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid -1;
        }
        
        mid = (start + end) / 2;
    }
    return -1;
}

//Find Pivot in an array
int getPivot(int arr[],int n){
    int s = 0;
    int e = n - 1;
    
    while(s<e){
        int mid = s + (e-s)/2;

        if(arr[mid]>=arr[0]){
            s = mid + 1;
        }else{
            e = mid;
        }
    }

    return s;
}

//Search in sorted rotated array
int searchArray(int arr[],int n,int k){
    int pivot = getPivot(arr,n);
    if(k >= arr[pivot] && k<=arr[n-1]){
        return binarySearch(arr,pivot,n-1,k);
    }
    else{
        return binarySearch(arr,0,pivot-1,k);
    }
}

//Finding square root using Binary Search
long long int squareRoot(int n){
    int s = 0;
    int e = n;
    long long int mid = s + (e - s)/2;
    int temp = -1;

    while(s <= e){
        if(mid*mid==n){
            return mid;
        }
        if(mid*mid<n){
            temp = mid;
            s = mid + 1;
        }
        else{
            e = mid -1;
        }
        mid = s + (e - s)/2;
    }
    return temp;
}

double sqrDecimal(int n, int precision, int tempSol){
    double factor = 1;
    double ans = tempSol;
    for(int i = 0; i < precision; i++){
        factor = factor/10;

        for(double j=ans; j*j<n; j+factor){
            ans = j;
        }
    }
    return ans;
}

//Book Allocation Problem
bool isPossible(vector<int>arr, int n, int m, int mid){
    int studentCount = 1;
    int pageSum = 0;
    
    for(int i=0; i<arr.size(); i++){
        if(pageSum + arr[i] <= mid){
            pageSum += arr[i];
        }
        else{
            studentCount++;
            if(studentCount > m || arr[i]>mid){
                return false;
            }
            pageSum = arr[i];
        }
    }
    return true;    
}

int allocateBooks(vector<int>arr,int n,int m){
    // m --> no of students
    // n --> no of books
    // can't be greater than m
    int s = 0;
    int sum = 0;
    for(int i=0; i<arr.size(); i++){
        sum += arr[i];
    }
    int e = sum;
    int ans = -1;
    
    while(s<e){
        int mid = s + (e-s)/2;
        if(isPossible(arr,n,m,mid)){
            ans = mid;
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
    }
}

// Agressive Cows
bool isPossible2(vector<int> &stalls, int k, int mid){
    int cowCount = 1;
    int lastPos = stalls[0];
    
    for(int i = 0; i < stalls.size(); i++){

        if(stalls[i] - lastPos >= mid){
            cowCount++;
            if(CowCount == k){
                return true;
            }
            lastPos = stalls[i];
        }

    }
    return false;
}

int aggresiveCows(vector<int> &stalls, int k){
   sort(stalls.begin(),stalls.end());
   int s = 0;
   int maxi = 0;
   for(int i = 0; i < stalls.size(), i++){
    maxi = max(maxi,stalls[i]);
   }
   int e = maxi;
   int ans = -1;
   while(s < e){
    int mid = s + (e - s)/2;
    if(isPossible2(stalls,k,mid)){
        ans = mid;
        s = mid + 1;
    }
    else{
        e = mid - 1;
    }
   }
}



int main(){
    // int arr[5] = {3,8,10,17,1};
    // cout << "Pivot point is " << getPivot(arr , 5) <<  endl;
    // int test[5]= {7,9,1,2,3};
    // int k = 7;
    // cout << "Searched element k is at " << searchArray(arr ,5, k) << endl;
    // int n = 37;
    // int number = squareRoot(n);
    // cout << "Square root of 37 is " << sqrDecimal(n,3,number) << endl;
    return 0;
}