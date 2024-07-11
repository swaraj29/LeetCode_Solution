class Solution {
public:
    string reverseParentheses(string s) {
        vector<int> open_brackets;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                open_brackets.push_back(i);  // Store the position of '('
            } else if (s[i] == ')') {
                int start = open_brackets.back();
                open_brackets.pop_back();
                reverse(s.begin() + start + 1, s.begin() + i);
            }
        }

        // Remove all parentheses from the string
        string result;
        for (char c : s) {
            if (c != '(' && c != ')') {
                result += c;
            }
        }

        return result;
    }
};