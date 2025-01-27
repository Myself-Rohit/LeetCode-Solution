// 283. Move Zeroes

// Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.
// Note that you must do this in-place without making a copy of the array.

// Example 1:
// Input: nums = [0,1,0,3,12]
// Output: [1,3,12,0,0]

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int k = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] != 0) {
                nums[k++] = nums[i];
            }
        }
        while (k < n) {
            nums[k++] = 0;
        }
    }
};
int main() {
    Solution obj;
    vector<int> nums = {0,1,0,3,12};
    cout << "Input:";
    for(int i=0; i < nums.size(); i++){
        cout << " " << nums[i];
    }
    obj.moveZeroes(nums);
    cout << "\nOutput:";
    for(int i=0; i < nums.size(); i++){
        cout << " " << nums[i];
    }
    return 0;
}