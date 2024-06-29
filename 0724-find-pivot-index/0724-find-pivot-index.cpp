class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int ls = 0;
        int rs = 0;

        // Calculate the total sum of the array
        for (int num : nums) {
            rs += num;
        }

        for (int i = 0; i < nums.size(); ++i) {
            rs -= nums[i];
            if (ls == rs) {
                return i;
            }
            ls += nums[i];
        }
        return -1;
    }
};
