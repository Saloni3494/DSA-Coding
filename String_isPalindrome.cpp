#include <string>
#include <cctype> // for isalnum and tolower
using namespace std;
// LeetCode Problem: https://leetcode.com/problems/valid-palindrome/
class String_isPalindrome {
public:
    bool isPalindrome(string s) {
       int start=0;
       int end=s.size()-1;
       while(start<=end){
           if(!isalnum(s[start])){
                start++; 
                continue;
            }
            if(!isalnum(s[end])){
                end--;
                continue;
            }
            if(tolower(s[start]) != tolower(s[end])){
                return false;
            }
            else{
                start++;
                end--;
            }
    }
       return true;
}
};

int main() {
    String_isPalindrome solution;
    string testString = "A man, a plan, a canal: Panama";
    bool result = solution.isPalindrome(testString);
    // Output the result
    if (result) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }
}