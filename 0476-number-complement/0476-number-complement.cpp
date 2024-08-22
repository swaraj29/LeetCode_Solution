class Solution {
public:
    int findComplement(int num) {
        
        bitset<32> b(num);
        string s = b.to_string();

        int result = 0;
        // Find the position of the first '1' to ignore leading zeros
        size_t first_one = s.find('1');
        s = s.substr(first_one); // Keep only the significant bits

        // Flip the bits
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '1'){
                s[i] = '0';   
            }
            else{
                s[i] = '1';
            }
        }

        // Convert the flipped binary string back to an integer
        long long powerOfTwo = 1; // Start with 2^0
        for (int i = s.size() - 1; i >= 0; i--) {
            if (s[i] == '1') {
                result += powerOfTwo;
            }
            powerOfTwo *= 2; // Move to the next bit position (2^i becomes 2^(i+1))
        }

        return result; // Return the computed result
    }
};
