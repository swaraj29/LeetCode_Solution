class Solution {
public:
    string reverseOnlyLetters(string s) {
        
        int n = s.size();
        int i = 0;
        int j = n - 1;

        while(i < j){
            // Check if s[i] is not a letter
            if(!isalpha(s[i])) {
                i++;
            }
            // Check if s[j] is not a letter
            else if(!isalpha(s[j])) {
                j--;
            }
            // Both s[i] and s[j] are letters, so swap them
            else {
                swap(s[i], s[j]);
                i++;
                j--;
            }
        }
        return s;
        
    }
};
