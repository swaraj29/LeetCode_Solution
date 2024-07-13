class Solution {
public:
    string toHex(int num) {
        // Map to convert integers to their hexadecimal representation
        unordered_map<int, char> mp = {
            {0, '0'}, {1, '1'}, {2, '2'}, {3, '3'},
            {4, '4'}, {5, '5'}, {6, '6'}, {7, '7'},
            {8, '8'}, {9, '9'}, {10, 'a'}, {11, 'b'},
            {12, 'c'}, {13, 'd'}, {14, 'e'}, {15, 'f'}
        };

        // Handle the case where num is zero
        if (num == 0) {
            return "0";
        }

        string result = "";
        unsigned int n = num; // Use unsigned int to handle negative numbers correctly

        while (n > 0) {
            int remainder = n % 16;
            result = mp[remainder] + result;
            n = n / 16;
        }

        return result;
    }
};
