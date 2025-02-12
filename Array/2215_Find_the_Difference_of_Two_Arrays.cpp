// 2215. Find the Difference of Two Arrays

// Given two 0-indexed integer arrays nums1 and nums2, return a list answer of size 2 where:
// answer[0] is a list of all distinct integers in nums1 which are not present in nums2.
// answer[1] is a list of all distinct integers in nums2 which are not present in nums1.
// Note that the integers in the lists may be returned in any order.

// Example 1:
// Input: nums1 = [1,2,3], nums2 = [2,4,6]
// Output: [[1,3],[4,6]]

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> mp;
        vector<vector<int>> ans(2);
        for (int i = 0; i < nums1.size(); i++) {
            mp[nums1[i]] = 1;
        }
        for (int i = 0; i < nums2.size(); i++) {
            if (mp.find(nums2[i]) != mp.end() && (mp[nums2[i]] <= 1)) {
                mp[nums2[i]] = 0;
            } else {
                mp[nums2[i]] = 2;
            }
        }

        for (auto it = mp.begin(); it != mp.end(); it++) {
            if (it->second == 1) {
                ans[0].push_back(it->first);
            } else if (it->second == 2) {
                ans[1].push_back(it->first);
            }
        }
        return ans;
    }
};
int main() {
    Solution obj;
    vector<int> nums1 = {1, 2, 3, 3};
    vector<int> nums2 = {1, 1, 2, 2};
    vector<vector<int>> ans;
    cout << "Input: nums1 =[";
    for (int i = 0; i < nums1.size(); i++) {
        cout << " ," << nums1[i];
    }
    cout << "], nums2 = [";
    for (int i = 0; i < nums2.size(); i++) {
        cout << " ," << nums2[i];
    }
    cout << "]\nOutput: [";

    ans = obj.findDifference(nums1, nums2);
    for (int i = 0; i < ans.size(); i++) {
        cout << "[";
        for (int j = 0; j < ans[i].size(); j++) {
            cout << " " << ans[i][j];
        }
        cout << "]";
    }
    cout << "]";
    return 0;
}
