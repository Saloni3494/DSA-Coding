#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
// Problem: Given a string s and an integer k, find the length of the longest substring that can be obtained by replacing at most k characters.
/*Example 1:

Input: s = "ABAB", k = 2
Output: 4
Explanation: Replace the two 'A's with two 'B's or vice versa.
Example 2:

Input: s = "AABABBA", k = 1
Output: 4
Explanation: Replace the one 'A' in the middle with 'B' and form "AABBBBA".
The substring "BBBB" has the longest repeating letters, which is 4.
There may exists other ways to achieve this answer too.
*/

class Solution {
public:
    int characterReplacement(string s, int k) {
        int freq[26]={0};
        int maxFreq=0,maxWin=0;
        int left=0;
        
        int changeChar;
        for(int right=0;right<s.length();right++){
            freq[s[right]-'A']++;

            maxFreq = max(maxFreq, freq[s[right]-'A']);
            int winSize=right-left+1;
            changeChar = winSize-maxFreq;

            if(changeChar>k){
                freq[s[left]-'A']--;
                left++;
            }
            
            winSize = right-left+1;
            maxWin = max(maxWin, winSize);        

        }
        return maxWin;
    }
};
int main() {
    Solution solution;
    string s = "AABABBA";
    int k = 1;
    int result = solution.characterReplacement(s, k);
    cout << "Length of the longest substring after replacement: " << result << endl; // Output: 4
    return 0;
}