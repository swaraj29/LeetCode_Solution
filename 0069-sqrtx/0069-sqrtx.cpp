class Solution {
public:
    int mySqrt(int x) {

        for (long long i = 1; i * i <= x; i++) {
            if (i * i == x) {
                return i;
            }
            if ((i + 1) * (i + 1) > x) {
                return i;
            }
        }
        return 0;
    }
};
