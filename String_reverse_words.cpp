#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        string ans="";
        int n=s.length();
        reverse(s.begin(),s.end());
        for(int i=0;i<n;i++){
            string word="";
            while(i<n && s[i]!=' '){
                word+=s[i];
                i++;
            }
            reverse(word.begin(),word.end());
            if(word.length()>0){
                ans+=" "+word;
            }
        }
        return ans.substr(1);
    }
};
int main() {
    Solution solution;
    string s = "the sky is blue";
    
    string result = solution.reverseWords(s);
    cout << "Reversed words: '" << result << "'" << endl;
    
    return 0;
}