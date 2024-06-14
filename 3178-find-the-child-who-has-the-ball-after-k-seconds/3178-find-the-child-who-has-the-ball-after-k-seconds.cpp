class Solution {
public:
    int numberOfChild(int n, int k) {
        n--;  // Since n is the number of places visited per round
        int noofrounds = k / n;  // Number of complete rounds
        int remainder = k % n;   // Remaining places after complete rounds
        
        if (noofrounds % 2 == 0) {
            // Even round: go to the right
            return remainder;
        } else {
            // Odd round: go to the left
            return n - remainder;
        }
    }
};