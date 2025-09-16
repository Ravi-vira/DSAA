#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int r=matrix.size();
        int c=matrix[0].size();

        vector<vector<int>> ans(c, vector<int>(r));
        for(int i=0;i<c;i++){
            for(int j=0;j<r;j++){
                ans[i][j]=matrix[j][i];
            }
        }

        return ans;
    }



int main(){
    int rows, cols;
    cout << "Enter no. of rows: ";
    cin >> rows;
    cout << "Enter no. of cols: ";
    cin >> cols;
    vector<vector<int>> matrix(rows, vector<int>(cols));
    cout << "Enter the elements: " << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> matrix[i][j];
        }
    }
    vector<vector<int>> transposed_matrix = transpose(matrix);
    for (int i = 0; i < cols; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            cout << transposed_matrix[i][j]<<" ";
        }
        cout << endl;
    }
}