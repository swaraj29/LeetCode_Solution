class Solution {
public:
    vector<string> cellsInRange(string s) {
        vector<string> vec;

        for (char i = s[0]; i <= s[3]; ++i) {
            for (char j = s[1]; j <= s[4]; ++j) {
                string k = "";
                k += i; // column letter
                k += j; // row number
                vec.push_back(k);
            }
        }
        return vec;
    }
};
