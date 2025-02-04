// 1456. Maximum Number of Vowels in a Substring of Given Length

// Given a string s and an integer k, return the maximum number of vowel letters in any substring of s with length k.
// Vowel letters in English are 'a', 'e', 'i', 'o', and 'u'.

// Example 1:
// Input: s = "abciiidef", k = 3
// Output: 3
// Explanation: The substring "iii" contains 3 vowel letters.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int isVowel(char str) {
        return (str == 'a' || str == 'e' || str == 'i' || str == 'o' ||
                str == 'u');
    }
    int maxVowels(string s, int k) {
        int maxCount = 0;
        int count = 0;
        for (int i = 0; i < k; i++) {
            if (isVowel(s[i]))
                count++;
        }
        maxCount = count;
        for (int i = k; i < s.size(); i++) {
            if (maxCount == k)
                break;
            if (isVowel(s[i - k]))
                count--;
            if (isVowel(s[i]))
                count++;
            maxCount = max(maxCount, count);
        }
        return maxCount;
    }
};

int main() {
    Solution obj;
    string s = "zpuerktejfp";
    int k = 3;
    cout << "Input: s = " << s << ", k = " << k;
    cout << "\nOutput: "<<k;
    return 0;
}
