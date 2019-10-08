/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Valid Parentheses.
Memory Usage: 8.3 MB, less than 97.67% of C++ online submissions for Valid Parentheses.
*/
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (char c : s)
        {
            if (c=='(' || c=='[' || c=='{')
                st.push(c);
            else
            {
                if (st.empty())
                    return false;
                else if (c==')' && st.top()!='(')
                    return false;
                else if (c==']' && st.top()!='[')
                    return false;
                else if (c=='}' && st.top()!='{')
                    return false;
                st.pop();
            }
        }
        return st.empty();
    }
};
