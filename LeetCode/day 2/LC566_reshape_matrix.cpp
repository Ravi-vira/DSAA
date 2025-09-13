#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size();
        int n = mat[0].size();

        // If total elements mismatch, return original matrix
        if (m * n != r * c) {
            return mat;
        }

        vector<vector<int>> ans(r, vector<int>(c));
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                int k = i * c + j;
                ans[i][j] = mat[k / n][k % n];
            }
        }
        return ans;
    }
};

int main() {
    int row, col, reshape_row, reshape_col;
    cout << "Enter no. of rows: ";
    cin >> row;
    cout << "Enter no. of cols: ";
    cin >> col;

    vector<vector<int>> mat(row, vector<int>(col));
    cout << "Enter elements: " << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> mat[i][j];
        }
    }

    cout << "Enter no. of reshape rows: ";
    cin >> reshape_row;
    cout << "Enter no. of reshape cols: ";
    cin >> reshape_col;

    Solution s;  // ✅ Create object
    vector<vector<int>> reshaped_mat = s.matrixReshape(mat, reshape_row, reshape_col);

    cout << "Reshaped matrix: \n";
    for (int i = 0; i < reshaped_mat.size(); i++) {
        for (int j = 0; j < reshaped_mat[0].size(); j++) {
            cout << reshaped_mat[i][j] << " ";
        }
        cout << endl;
    }
}
