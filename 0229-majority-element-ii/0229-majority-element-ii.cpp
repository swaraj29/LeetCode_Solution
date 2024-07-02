class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {

        int n = nums.size();

        int ea = n / 3;
        int c = 1;

        vector<int> vec;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n - 1; i++) {
            if (nums[i] == nums[i + 1]) {
                c++;
            } else {
                if (c > ea) {
                    vec.push_back(nums[i]);
                }
                c = 1;
            }
        }
        
        // Check the last element
        if (c > ea) {
            vec.push_back(nums[n - 1]);
        }

        return vec;
    }
};
