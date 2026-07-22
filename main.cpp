#include <stack>
#include <string>
#include <iostream>
using namespace std;

int longestValidParenthesis(string s) {
    stack<int> st;

    // to calculate the length correctly initialized the stack with -1 
    st.push(-1);
// initialized the current length with 0
    int maxLength = 0;

    for (int i = 0; i < s.length(); i++) {

        if (s[i] == '(') {
            st.push(i);
        } else {
            st.pop();
            if (st.empty()) 
            {
                st.push(i);
            } 
            else {
                int currentLength = i - st.top();
                maxLength = max(maxLength, currentLength);
            }
        }
    }

    return maxLength;
}

int main() {

    cout << longestValidParenthesis("(()") << endl;      
    cout << longestValidParenthesis(")()())") << endl;   
    cout << longestValidParenthesis("") << endl;         

    return 0;
}