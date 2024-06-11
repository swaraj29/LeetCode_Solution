class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int result = 0;
        for (int i = 0; i < nums.size(); i++) {
            result = result | nums[i];
        }
        return result * pow(2, nums.size() - 1);
    }
};
