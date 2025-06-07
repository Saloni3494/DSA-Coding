#include <iostream>
#include <string>
using namespace std;
// Problem: Given two strings s1 and s2, return true if s2 contains a permutation of s1, or false otherwise.
class Solution {
public:
    bool isFreqSame(int freq1[], int freq2[]) {
        for (int i = 0; i < 26; i++) {
            if (freq1[i] != freq2[i]) {
                return false;
            }
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        int freq[26] = {0};

        for (int i = 0; i < s1.length(); i++) {
            freq[s1[i] - 'a']++;
        }
         int winSize = s1.length();
        for (int i = 0; i < s2.length(); i++) {
            int windIdx = 0;
            int idx = i;
            int winFreq[26] = {0};
            
            while (windIdx < winSize && idx < s2.length()) {
                winFreq[s2[idx] - 'a']++;
                windIdx++;
                idx++;
            }
            if (isFreqSame(freq, winFreq)) {
                return true;
            }
        }
         return false;
    }
};
int main() {
    Solution sol;
    string s1 = "ab";
    string s2 = "eidbaooo";
    bool result = sol.checkInclusion(s1, s2);
    cout << (result ? "true" : "false") << endl; // Output: true
    return 0;
}