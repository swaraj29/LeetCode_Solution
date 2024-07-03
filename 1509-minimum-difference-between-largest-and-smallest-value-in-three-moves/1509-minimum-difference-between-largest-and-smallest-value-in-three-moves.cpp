class Solution {
public:
    int minDifference(vector<int>& nums) 
    {
        if(nums.size() <= 3) return 0;
        sort(nums.begin(), nums.end());

        int ans = INT_MAX, n = nums.size();

        // frist three remove
        ans = min(ans, nums.back() - nums[3]);

        // last three remove
        ans = min(ans, nums[n-4] - nums[0]);

        // first 2 remove, last 1 remove
        ans = min(ans, nums[n-2] - nums[2]);

        // first 1 remove, last 2 remove
        ans = min(ans, nums[n-3] - nums[1]);

        return ans;
    }
};