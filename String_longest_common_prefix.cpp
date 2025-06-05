#include <conio.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class String_longest_common_prefix {
    /*
    Given a string array, find the longest common prefix string among all strings in the array.
    If there is no common prefix, return an empty string "".
    */
public:
    string longestCommonPrefix(vector<string>& str) {
        sort(str.begin(), str.end());
        int n= str.size()-1;
        string s="";
        for(int i=0;i<str[0].size();i++){
            if(str[0][i]==str[n][i]){
                s+=str[0][i];
            }
            else{
                break;
            }
        }
        return s;
    }
};

int main() {
    String_longest_common_prefix obj;
    vector<string> str = {"flower", "flow", "flight"};
    cout << "Longest common prefix: " << obj.longestCommonPrefix(str) << endl; // Output: "fl"
    
    str = {"dog", "racecar", "car"};
    cout << "Longest common prefix: " << obj.longestCommonPrefix(str) << endl; // Output: ""
    
    str = {"a", "a", "a"};
    cout << "Longest common prefix: " << obj.longestCommonPrefix(str) << endl; // Output: "a"

    _getch();
    return 0;
}