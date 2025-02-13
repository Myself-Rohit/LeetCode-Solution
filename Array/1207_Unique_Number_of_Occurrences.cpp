// 1207. Unique Number of Occurrences

// Given an array of integers arr, return true if the number of occurrences of each value in the array is unique or false otherwise.

// Example 1:
// Input: arr = [1,2,2,1,1,3]
// Output: true
// Explanation: The value 1 has 3 occurrences, 2 has 2 and 3 has 1. No two values have the same number of occurrences.

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> mp;
        for (int i = 0; i < arr.size(); i++) {
            mp[arr[i]]++;
        }
        unordered_set<int> st;
        for (auto it = mp.begin(); it != mp.end(); it++) {
            if (st.find(it->second) != st.end()) {
                return false;
            }
            st.insert(it->second);
        }
        return true;
    }
};

int main() {
    Solution obj;
    vector<int> arr = {1, 2};
    cout << "Input: arr = [";
    for (int i = 0; i < arr.size(); i++) {
        cout << " " << arr[i];
    }
    cout << " ]\nOutput: " << obj.uniqueOccurrences(arr);
    return 0;
}
