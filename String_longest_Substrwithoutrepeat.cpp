#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;
// Problem: Given a string s, find the length of the longest substring without repeating characters.
//3. Longest Substring Without Repeating Characters
/*Example 1:

Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3.
Example 2:

Input: s = "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.
Example 3:

Input: s = "pwwkew"
Output: 3
Explanation: The answer is "wke", with the length of 3.
Notice that the answer must be a substring, "pwke" is a subsequence and not a substring
*/

int calc(string s){
	int n=s.size();
	unordered_map<char, int> freq;
	int left=0;
	int maxLen=0;
	for(int right=0;right<n;right++){
		freq[s[right]]++;
		
		while(freq[s[right]]>1){
			freq[s[left]]--;
			left++;
		}
		maxLen=max(maxLen,right-left+1);
		
	}
	return maxLen;
}
int main() {
    string s = "abcabcbb";
    int result = calc(s);
    cout << "Length of the longest substring without repeating characters: " << result << endl; // Output: 3
    return 0;
}
