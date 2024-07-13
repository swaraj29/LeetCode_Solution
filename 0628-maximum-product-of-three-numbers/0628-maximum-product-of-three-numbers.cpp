class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end(), greater<int>());
        int p = nums[0] * nums[1] * nums[2];
        return p; 
    }
};