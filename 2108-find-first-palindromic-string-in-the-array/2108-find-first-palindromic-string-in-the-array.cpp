class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        string result = "";
        bool flag = false; // Initialize flag to false
        
        for (int i = 0; i < words.size(); ++i) {
            string k = words[i];
            string p = k;
            reverse(p.begin(), p.end());
            
            if (k == p) { // Check if k is palindrome
                result = k;
                flag = true;
                break; // Break out of loop once first palindrome is found
            }
        }
        
        if (!flag) {
            result = ""; // If no palindrome found, set result to empty string
        }
        return result;
    }
};
