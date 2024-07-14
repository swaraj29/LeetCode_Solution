class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        string s = bitset<32>(n).to_string();  // Convert to 32-bit binary string
        reverse(s.begin(), s.end());           // Reverse the string
        uint32_t reversed = bitset<32>(s).to_ulong(); // Convert back to unsigned long
        return reversed;
    }
};
