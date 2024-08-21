class Solution {
public:
    int minimumLength(string s) {
        int n = s.size();

        int i = 0;
        int j = n - 1;

        while (i < j) {
            if (s[i] == s[j]) {
                char ch = s[i];
                // Remove all matching characters from the beginning
                while (i <= j && s[i] == ch) {
                    i++;
                }
                // Remove all matching characters from the end
                while (i <= j && s[j] == ch) {
                    j--;
                }
            } else {
                // If characters do not match, no need to continue
                break;
            }
        }

        // Return the length of the remaining substring
        return j - i + 1;
    }
};
