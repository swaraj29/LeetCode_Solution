class Solution {
public:
    int countKConstraintSubstrings(string s, int k) {
        int n = s.size();  
        int c = 0;

        for(int i = 0; i < n; i++) {
            int zeros = 0;
            int ones = 0;

            for(int j = i; j < n; j++) {
                if (s[j] == '0') {
                    zeros++;
                } else {
                    ones++;
                }

                if (zeros <= k || ones <= k) {
                    c++;
                } else {
                    break;
                }
            }
        }

        return c;
    }
};
