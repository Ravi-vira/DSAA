#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();
        int col=matrix[0].size();

        int rowindex=0;
        int colindex=col-1;

        while(rowindex <row && colindex>=0){
            int element=matrix[rowindex][colindex];
            if(element==target){
                return true;
            }
            if(element<target){
                rowindex++;

            }

            else{
                colindex--;
            }

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