class Solution {
public:
    string reverseWords(string s) {
        
        int n = s.size();
        string result = "";
        string p = "";
        
        for(int i = n - 1; i >= 0; i--){
            if(s[i] != ' '){
                p += s[i];
            } else if(!p.empty()) { // Only reverse and add p if it's not empty
                reverse(p.begin(), p.end());
                if(!result.empty()) {
                    result += " "; // Add a space before the next word
                }
                result += p;
                p = "";  // Reset p for the next word
            }
        }
        
        // Reverse and add the last word (or only word if there's no space)
        if(!p.empty()) {
            reverse(p.begin(), p.end());
            if(!result.empty()) {
                result += " ";
            }
            result += p;
        }
        
        return result;
    }
};
