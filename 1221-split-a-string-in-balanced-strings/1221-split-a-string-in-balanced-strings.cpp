class Solution {
public:
    int balancedStringSplit(string s) {
        int count = 0;
        int balance = 0;

        for(int i = 0; i < s.size(); i++) {
            if(s[i] == 'L') {
                balance++;
            } else if(s[i] == 'R') {
                balance--;
            }

            // When balance is 0, it means we have found a balanced substring
            if(balance == 0) {
                count++;
            }
        }

        return count;
    }
};
