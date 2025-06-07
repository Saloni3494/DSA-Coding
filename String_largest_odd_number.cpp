#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
    string largestOddNumber(string str) {
        int n = str.length();
        for (int i = n - 1; i >= 0; i--) {
            if ((str[i] - '0') % 2 == 1) { // odd digit
                return str.substr(0, i + 1);
            }
        }
        return ""; // no odd number
    }
};
int main() {
    Solution solution;
    string str = "52";
    
    string result = solution.largestOddNumber(str);
    if (!result.empty()) {
        cout << "Largest odd number: '" << result << "'" << endl;
    } else {
        cout << "No odd number found." << endl;
    }
    
    return 0;
}