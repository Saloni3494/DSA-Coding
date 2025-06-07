#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
class Solution {
public:
    void perform(vector<string>& str) {
        sort(str.begin(), str.end());
        
        for(int i=0;i<str.size();i++) {
            cout << str[i] << " ";
        }
    }
};
int main() {
    Solution solution;
    vector<string> str = {"flower","flow","flight"};
    
    solution.perform(str);
    
    return 0;
}