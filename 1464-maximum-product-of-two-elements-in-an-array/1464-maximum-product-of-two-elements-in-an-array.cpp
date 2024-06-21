class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int a =  (nums[n - 1] - 1) * (nums[n - 2] - 1);
        return a;
        
    }
};