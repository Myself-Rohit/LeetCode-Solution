// 1004. Max Consecutive Ones III

// Given a binary array nums and an integer k, return the maximum number of consecutive 1's in the array if you can flip at most k 0's.

// Example 1:
// Input: nums = [1,1,1,0,0,0,1,1,1,1,0], k = 2
// Output: 6
// Explanation: [1,1,1,0,0,1,1,1,1,1,1]
// Bolded numbers were flipped from 0 to 1. The longest subarray is underlined.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int maxLen = 0;
        int l = 0;
        int zeroCount =0;
        for(int r = 0; r < nums.size(); r++){
            if(nums[r] == 0){
                zeroCount++;
            }
            while(zeroCount > k){
                if(nums[l] == 0){
                    zeroCount--;
                }
                l++;
            }
            maxLen = max(maxLen, r - l + 1);
        }
        return maxLen;
    }
};
int main() {
    Solution obj;
    vector<int> nums = {0,0,1,1,0,0,1,1,1,0,1,1,0,0,0,1,1,1,1};
    int k = 3;
    cout << "Input: nums =";
    for(int i = 0; i < nums.size(); i++){
        cout << " " << nums[i];
    }
    cout << ", k = " << k << "\nOutput: " << obj.longestOnes(nums,k);
    return 0;
}
