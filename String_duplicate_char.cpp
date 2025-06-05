#include <iostream>
#include <unordered_map>
using namespace std;

class String_duplicate_char {
public:
    void duplicateValue(string str) {
        unordered_map<char, int> freq;
        for (char ch : str) {
            freq[ch]++;
        }
        for (auto& pair : freq) {
            if (pair.second > 1) {
                cout << "'" << pair.first << "' count is " << pair.second << endl;
            }
        }
    }
};
int main() {
    String_duplicate_char obj;
    string str = "hello world";
    cout << "Duplicate characters in the string: " << endl;
    obj.duplicateValue(str);
    return 0;
}