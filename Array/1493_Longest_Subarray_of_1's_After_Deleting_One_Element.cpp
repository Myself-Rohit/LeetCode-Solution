// 1493. Longest Subarray of 1's After Deleting One Element

// Given a binary array nums, you should delete one element from it.
// Return the size of the longest non-empty subarray containing only 1's in the resulting array. Return 0 if there is no such subarray.

// Example 1:
// Input: nums = [1,1,0,1]
// Output: 3
// Explanation: After deleting the number in position 2, [1,1,1] contains 3 numbers with value of 1's.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int l = 0;
        int maxLen = 0;
        int zeroCount = 0;
        for (int r = 0; r < nums.size(); r++) {
            if (nums[r] == 0) {
                zeroCount++;
            }
            while (zeroCount > 1) {
                if (nums[l] == 0)
                    zeroCount--;
                l++;
            }
            maxLen = max(maxLen, r - l );
        }
        return maxLen;
    }
};

int main() {
    Solution obj;
    vector<int> nums = {0,1,1,1,0,1,1,0,1};
    cout << "Input: nums = [" ;
    for(int i = 0; i < nums.size(); i++){
        cout << " " << nums[i];
    }
    cout <<"]\nOutput: " << obj.longestSubarray(nums);
    return 0;
}
