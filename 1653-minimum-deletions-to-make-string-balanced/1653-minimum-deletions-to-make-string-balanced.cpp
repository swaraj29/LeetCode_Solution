class Solution {
public:
    int minimumDeletions(string s) {
        int n = s.size();
        stack<char> st;
        int count = 0;

        for (int i = 0; i < n; i++) {
            if (!st.empty() && st.top() == 'b' && s[i] == 'a') {
                st.pop();
                count++;
            } else {
                st.push(s[i]);
            }
        }
        return count;
    }
};
