class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> result(n + 1);
        for(int i = 0; i < n + 1; i++){
            result[i] = __builtin_popcount(i);
        }
        return result;
    }
};