class Solution {
public:
    int singleNumber(vector<int>& nums) {

        sort(nums.begin(),nums.end());

        for(int i = 1; i < nums.size() - 1; i+= 3){
            if(nums[i-1] != nums[i] && nums[i] == nums[i+1]){
                return nums[i-1];
            }
            else if(nums[i - 1] == nums[i] && nums[i] != nums[i+1] ){
                return nums[i + 1];
            }
        }
        return nums[nums.size() - 1];
    }
};