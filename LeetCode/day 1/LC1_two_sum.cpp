#include <iostream>
using namespace std;

pair<int,int> twoSum(int* arr, int size, int target) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] + arr[j] == target) {
                return {i, j};
            }
        }
    }
    return {-1, -1}; // Return -1, -1 if no solution is found
}

int main(){
    int target;
    int size;
    cout<<"Enter size of array: ";
    cin>>size;
    int* arr=new int[size];
    cout<<"Enter elements of array: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Enter target: ";
    cin>>target;

    pair<int,int> result = twoSum(arr, size, target);
    if (result.first != -1) {
        cout << "ans: " << result.first << ", " << result.second << endl;
    } else {
        cout << "No two sum solution found." << endl;
    }


    
}