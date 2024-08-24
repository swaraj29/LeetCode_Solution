class Solution {
public:
    int findMin(vector<int>& nums) {

        int n = nums.size();
        int i = n - 1;
        while(i > 0 && nums[i] >= nums[i - 1] ){
            i--;
        }
        return nums[i];
        

    }
};