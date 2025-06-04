#include <iostream>
#include <stack>
#include <string>
using namespace std;
class String_remove_consecutives {
    // Problem: Given a string, remove all consecutive duplicate characters.
    // Example: "aabbcc" becomes "abc", "aaabbbccc" becomes "abc".
    // Approach: Iterate through the string and remove characters that are the same as the next character.
    
  public:
    string removeConsecutiveCharacter(string& s) {
        int i=0;
        while(i<s.size()-1){
            if(s[i]==s[i+1]){
                s.erase(i,1);
               
            }
            else{
                i++;
            }
        }
        return s;
    }
};

int main() {
    String_remove_consecutives solution;
    string test1 = "aabbcc"; // Expected: "abc"
    string test2 = "aaabbbccc"; // Expected: "abc"
    string test3 = "abc"; // Expected: "abc"
    string test4 = "a"; // Expected: "a"
    
    cout << solution.removeConsecutiveCharacter(test1) << endl; // Output: abc
    cout << solution.removeConsecutiveCharacter(test2) << endl; // Output: abc
    cout << solution.removeConsecutiveCharacter(test3) << endl; // Output: abc
    cout << solution.removeConsecutiveCharacter(test4) << endl; // Output: a
    
    return 0;
}