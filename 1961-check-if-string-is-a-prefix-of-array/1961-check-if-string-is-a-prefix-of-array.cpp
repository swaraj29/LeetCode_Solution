class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        string p = "";
        for(auto &word : words){
            p += word;
            // Check if the current prefix matches s
            if (p == s) {
                return true;
            }
            // If the prefix becomes longer than s, s cannot be a prefix
            if (p.size() > s.size()) {
                return false;
            }
        }
        // If the loop completes and p is not equal to s, return false
        return false;
    }
};
