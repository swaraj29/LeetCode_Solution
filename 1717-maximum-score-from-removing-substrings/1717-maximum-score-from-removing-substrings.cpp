class Solution {
public:
    // Function to remove substrings matching matchStr from the string s
    string removeSubstr(string &s, string &matchStr) {
        stack<char> st;

        for(char &ch : s) {
            if(ch == matchStr[1] && !st.empty() && st.top() == matchStr[0]) {
                st.pop();
            } else {
                st.push(ch);
            }
        }

        // Reconstruct the string from the stack
        string result;
        while(!st.empty()) {
            result.push_back(st.top());
            st.pop();
        }

        // Reverse the string to get the correct order
        reverse(result.begin(), result.end());
        return result;
    }

    // Function to calculate the maximum gain
    int maximumGain(string s, int x, int y) {
        int n = s.size();
        int score = 0;

        // Determine the order of removal based on the values of x and y
        string maxStr = (x > y) ? "ab" : "ba";
        string minStr = (x > y) ? "ba" : "ab";

        // First pass: remove maxStr substrings
        string temp_first = removeSubstr(s, maxStr);
        int L = temp_first.length();

        int charRemoved = (n - L);
        score += (charRemoved / 2) * max(x, y);

        // Second pass: remove minStr substrings
        string temp_second = removeSubstr(temp_first, minStr);
        charRemoved = L - temp_second.length();
        score += (charRemoved / 2) * min(x, y);

        return score;
    }
};
