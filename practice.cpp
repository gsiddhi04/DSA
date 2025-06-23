#include<bits/stdc++.h>
#include <vector>
#include <iostream>
using namespace std;


vector<int> productExceptSelf(vector<int>& nums) {
    int mul = 1;
    int n = nums.size();
    vector<int>result;

    for (int i=0; i<n; i++){
        if (nums[i]==0){
            result.push_back(mul*=nums[i]);
        }else{
            mul *= nums[i];
        }    
    }
    for (int i=0; i<n; i++){
        if(nums[i]!=0){
            result.push_back(mul/nums[i]) ;
        }else{
            result.push_back(0);
        }
    }
    for (int x : nums) {
        cout << x << " ";
    }
    cout << endl;
    return result;
    
}

int main(){
    vector<int> nums = {-1, 1, 0, -3, 3};
    vector<int> result = productExceptSelf(nums);
    cout << "The desired array: ";
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}