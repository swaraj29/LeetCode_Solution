class Solution {
public:
    bool isValid(string s) {
        string t; // temporary string to hold the modified version of s
        int i = 0; // pointer for the current position in t

        for (int j = 0; j < s.size(); j++) {
            t.push_back(s[j]); // add the current character to t
            i++;

            // Check if the last three characters in t form "abc"
            if (i >= 3 && t[i - 3] == 'a' && t[i - 2] == 'b' && t[i - 1] == 'c') {
                t.pop_back(); // remove 'c'
                t.pop_back(); // remove 'b'
                t.pop_back(); // remove 'a'
                i -= 3; // adjust the index
            }
        }

        return t.empty(); // if t is empty, the string is valid
    }
};
