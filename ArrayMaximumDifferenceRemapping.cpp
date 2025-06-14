#include <string>
#include <iostream>
#include <algorithm>
using namespace std;
class Solution {
public:
    int minMaxDifference(int num) {
        string str = to_string(num);
        int n = str.size();
        string maxi = "";
        string mini = "";
        char ele = ' ';

        for (int i = 0; i < n; i++) {
            if (str[i] != '9') {
                ele = str[i];
                break;
            }
        }

        for (int i = 0; i < n; i++) {
            if(ele == str[i]) maxi += '9';
            else maxi += str[i];
        }

        for (int i = 0; i < n; i++) {
            if(str[0] == str[i]) mini += '0';
            else mini += str[i];
        }

        return stoi(maxi) - stoi(mini);
    }
};

int main() {
    Solution solution;
    int num = 123456;
    cout << "Minimum Maximum Difference: " << solution.minMaxDifference(num) << endl;
    return 0;
}

