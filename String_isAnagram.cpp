#include <string>
#include <cctype> // for isalnum and tolower
#include <unordered_map>
using namespace std;
// LeetCode Problem: https://leetcode.com/problems/valid-palindrome/
class String_isAnagram {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> ma;
        unordered_map<char, int> mb;

        for(const auto &el: s){
            ma[el]++;
        }
        for(const auto &el: t){
            mb[el]++;
        }

        return ma==mb;
        
    }
};

int main() {
    String_isAnagram solution;
    string s = "anagram";
    string t = "nagaram";
    bool result = solution.isAnagram(s, t);
    // Output the result
    if (result) {
        printf("The strings are anagrams.\n");
    } else {
        printf("The strings are not anagrams.\n");
    }
}