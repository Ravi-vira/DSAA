#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();
        int col=matrix[0].size();

       int s=0;
        int e=row*col-1;
        int mid=s+(e-s)/2;
        while(s<=e){

            //mid/col gives row number
            //mid%col gives column number
            if(matrix[mid/col][mid%col]==target){
                return true;
            }
            if(matrix[mid/col][mid%col]<target){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
            mid=s+(e-s)/2;
        }
        return false;
        
    }
};



int main(){
    Solution obj;
    cout<<"Enter number of rows  ";
    int row,col;
    cin>>row;
    cout<<"Enter number of columns  ";
    cin>>col;
   vector<vector<int>> matrix(row, vector<int>(col));
    cout << "Enter elements: ";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> matrix[i][j];
        }
    }
    cout << "Enter target: ";
    int target;
    cin >> target;
    cout<< obj.searchMatrix(matrix, target);
}