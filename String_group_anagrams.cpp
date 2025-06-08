#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;
// Problem: Given an array of strings, group the anagrams together.
/*Example 1:

Input: strs = ["eat","tea","tan","ate","nat","bat"]

Output: [["bat"],["nat","tan"],["ate","eat","tea"]]

Explanation:

There is no string in strs that can be rearranged to form "bat".
The strings "nat" and "tan" are anagrams as they can be rearranged to form each other.
The strings "ate", "eat", and "tea" are anagrams as they can be rearranged to form each other.
Example 2:

Input: strs = [""]

Output: [[""]]*/


class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> freqStringMap;

        for (string& str : strs) {
            string freqString = getStringFrequency(str);
            freqStringMap[freqString].push_back(str);
        }

        vector<vector<string>> result;

        for (auto& entry : freqStringMap) {
            result.push_back(entry.second);
        }
        return result;
    }

private:
    string getStringFrequency(string str) {
        vector<int> freq(26);

        for (char ch : str) {
            freq[ch - 'a']++;
        }

        string key;
        for (int count : freq) {
            key += to_string(count) + "#";
        }
        return key;
    }
};
int main() {
    Solution solution;
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
    vector<vector<string>> result = solution.groupAnagrams(strs);

    for (const auto& group : result) {
        for (const string& str : group) {
            cout << str << " ";
        }
        cout << endl;
    }
    return 0;
}