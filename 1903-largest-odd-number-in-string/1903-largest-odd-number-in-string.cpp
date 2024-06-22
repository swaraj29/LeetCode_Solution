class Solution {
public:
    string largestOddNumber(string num) {
        
        vector<string> vec; // Vector to store substrings

        // Check if the last digit is odd
        if ((num.back() - '0') % 2 == 1) {
            return num; 
        } else {
            // Add substrings to vec
            for (int i = 0; i < num.size(); i++) {
                string k = num.substr(0, i + 1);
                vec.push_back(k);
            }
        }

        string res = "";

        // Iterate through vec and find the largest odd number
        for (int i = 0; i < vec.size(); i++) {
            int a = vec[i].back() - '0';
            if (a % 2 == 1) {
                res = vec[i];
            }
        }
        return res;
    }
};
