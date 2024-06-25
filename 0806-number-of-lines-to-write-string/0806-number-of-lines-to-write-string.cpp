class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {

        int n = widths.size();
        
        // Create a vector of pairs where each pair contains a char and its width
        vector<pair<char, int>> vec(26);
        
        for (int i = 0; i < 26; i++) {
            vec[i] = make_pair('a' + i, widths[i]);
        }
        
        int sum = 0;
        int res1 = 1; // Start with one line
        int res2 = 0;

        for (char c : s) {
            int width = widths[c - 'a'];
            if (sum + width > 100) {
                res1++;
                sum = width;
            } else {
                sum += width;
            }
            res2 = sum;
        }

        return {res1, res2};
    }
};
