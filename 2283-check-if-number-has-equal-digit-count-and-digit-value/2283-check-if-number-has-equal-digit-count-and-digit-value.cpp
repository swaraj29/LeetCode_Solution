class Solution {
public:
    bool digitCount(string num) {
        unordered_map<char, int> mp;

        for(char digit : num){
            mp[digit]++;
        }

        for(int i = 0; i < num.size(); i++){
            char expectedCount = num[i];
            char currentDigit = i + '0';

            if(mp[currentDigit] != (expectedCount - '0')){
                return false;
            }
        }
        return true;
    }
};