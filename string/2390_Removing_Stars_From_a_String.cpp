// 2390. Removing Stars From a String

// You are given a string s, which contains stars *.
// In one operation, you can:
// Choose a star in s.
// Remove the closest non-star character to its left, as well as remove the star itself.
// Return the string after all stars have been removed.

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeStars(string s) {
        string str = "";
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != '*') {
                str += s[i];
            } else {
                str.pop_back();
            }
        }
        return str;
    }
};

int main() {
    Solution obj;
    string s = "leet**cod*e";
    cout << "Input: s = " << s;
    cout << "\nOutput: " << obj.removeStars(s);
    
    return 0;
}
