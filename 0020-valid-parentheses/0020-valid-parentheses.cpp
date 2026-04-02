#include <stack>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for(char c : s) {
            // push opening brackets
            if(c == '(' || c == '{' || c == '[') {
                st.push(c);
            } 
            else {
                // if stack empty → invalid
                if(st.empty()) return false;

                char top = st.top();
                st.pop();

                // check matching
                if((c == ')' && top != '(') ||
                   (c == '}' && top != '{') ||
                   (c == ']' && top != '[')) {
                    return false;
                }
            }
        }

        // stack should be empty
        return st.empty();
    }
};