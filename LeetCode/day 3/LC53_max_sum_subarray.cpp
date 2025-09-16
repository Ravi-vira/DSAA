#include <bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int>& nums) {
        int curr=0;
        int best=INT_MIN;
        for(int i=0;i<nums.size();i++){
            curr=max(nums[i],curr+nums[i]);
            best=max(best,curr);
        }
        return best;
    }



int main(){
    int size;
    cout << "Enter size of array: ";
    cin >> size;
    vector<int> arr(size);
    cout << "Enter elements of array: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Max sum of subarray is: " << maxSubArray(arr);
}