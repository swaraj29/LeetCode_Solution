class Solution {
public:
    bool judgeSquareSum(int c) {
        long long s = 0;
        long long e = (long long)sqrt(c); // Start with the square root of c
        while (s <= e) {
            long long k = s * s + e * e;
            if (k == c) {
                return true;
            }
            else if (k > c) {
                e--;
            }
            else {
                s++;
            }
        }
        return false;
    }
};
