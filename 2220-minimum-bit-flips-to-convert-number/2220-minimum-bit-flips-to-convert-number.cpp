class Solution {
public:
    int minBitFlips(int start, int goal) {
        int count = 0;
        int differentBit = start ^ goal; // step 1
        while (differentBit) {
            if (differentBit & 1) {
                count++;
            }
            differentBit = differentBit >>= 1;
        }
        return count;
    }
};
