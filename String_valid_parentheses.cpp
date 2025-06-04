#include <iostream>
#include <stack>
#include <string>
using namespace std;
// Problem: Given a string containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.
class String_valid_parenthesis {
    // A string is valid if:
    // 1. Open brackets are closed by the same type of brackets.
    // 2. Open brackets are closed in the correct order.
    // 3. An empty string is also considered valid.
    // Example: "()" is valid, "([{}])" is valid, "(]" is not valid, "([)]" is not valid, "{[]}" is valid.
public:
    bool isValid(string str) {
        stack<char> st;
        for(int i=0;i<str.size();i++){
            if(str[i]=='('||str[i]=='{'||str[i]=='['){ //opening
                st.push(str[i]);
            }
            else{//closing
                if(st.size()==0){
                    return false;
                }
                else{
                    if(st.top()=='(' && str[i]==')'||
                       st.top()=='{' && str[i]=='}'||
                       st.top()=='[' && str[i]==']'){
                        st.pop();
                    }
                    else{ //no match
                        return false;
                    }
                }
            }
        }
        return st.size()==0;
    }
};

int main() {
    String_valid_parenthesis solution;
    string test1 = "([{}])"; // Valid
    string test2 = "(]";      // Invalid
    string test3 = "{[()]}";  // Valid
    string test4 = "([)]";    // Invalid
    cout << solution.isValid(test1) << endl; // Output: 1 (true)
    cout << solution.isValid(test2) << endl; // Output: 0 (false)
    cout << solution.isValid(test3) << endl; // Output: 1 (true)
    cout << solution.isValid(test4) << endl; // Output: 0 (false)
    return 0;
}