#include <iostream>
using namespace std;

int largestRowSum(int arr[][3], int row, int col){
    int maxi = INT_MIN;
    int rowIndex = -1;

    for(int row=0; row<3; row++){
        int sum = 0;
        for(int col = 0; col < 3; col++){
            sum += arr[row][col];
        }

        if(sum > maxi){
            maxi = sum;
            rowIndex = row;
        }
    }
    cout << "The maximum sum is " << maxi << endl;
    return rowIndex;
}

//Wave print
vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    vector<int> ans;
    for(int col = 0; col < mCols; col++){

        if(col&1){
            //Odd Index bottom to top
            for(int row=nRows-1; row >= 0; row--){
                //cout << arr[row][col] << " ";
                ans.push_back(arr[row][col]);
            }
        }
        else{
            //Even Index top to bottom
            for(int row = 0; row < nRows; row++){
                //cout << arr[row][col] << " ";
                ans.push_back(arr[row][col]);
            }
        }
    }
    return ans;
}

//Spiral print

vector<int> spiralOrder(vector<vector<int>>& matrix) {

    vector<int> ans;
    int row = matrix.size();
    int col = matrix[0].size();

    int count = 0;
    int total = row*col;

    int startingRow = 0;
    int startingCol = 0;
    int endingRow  = row - 1;
    int endingCol = col - 1;

    while(count<total){
                // print element in starting row
        for(int index = startingCol; count<total && index <= endingCol; index++){
            ans.push_back(matrix[startingRow][index]);
            count++;
        }
        startingRow++;
                // print element in ending column
        for(int index = startingRow; count<total && index <= endingRow; index++){
            ans.push_back(matrix[index][endingCol]);
            count++;
        }
        endingCol--;
                // print element in ending row
        for(int index = endingCol; count<total && index >= startingCol; index--){
            ans.push_back(matrix[endingRow][index]);
            count++;
        }
        endingRow--;
                // print element in starting column
        for(int index = endingRow; count<total && index >= startingRow; index--){
            ans.push_back(matrix[index][startingCol]);
            count++;
        }
        startingCol++;
    }
    return ans;
}

// Binary Search in 2D array
bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int row = matrix.size();
    int col = matrix[0].size();

    int s = 0;
    int e = row*col - 1;

    while (s <= e){

        int mid = s + (e-s)/2;
        int element = matrix[mid/col][mid%col];

        if(element == target){
            return true;
        }
            
        if(element < target){
            s = mid + 1;
        }

        if(element > target){
            e = mid - 1;
        }

    }
    return false;
}

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int row = matrix.size();
    int col = matrix[0].size();

    int rowIndex = 0;
    int colIndex = col - 1;

    while(rowIndex < row && colIndex >= 0){
        int element = matrix[rowIndex][colIndex];

        if(element == target){
            return true;
        }

        if(element > target){
            row++;
        }
        else{
            colIndex--;
        }
    }
    return false;
}
int main(){
    int arr[3][3] = {3,4,11,2,12,1,7,8,7};

    cout<< "Enter the elements" << endl;
    for(int row =0; row<3; row++){
        for(int col = 0; col < 3; col++){
            cin >> arr[row][col];
        }
    }
    for(int row =0; row<3; row++){
        for(int col = 0; col < 3; col++){
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }

    cout << "Max row is at Index" << largestRowSum(arr,3,3) << endl;
}