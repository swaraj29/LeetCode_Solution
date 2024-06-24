class Solution {
public:
    int minOperations(vector<int>& nums) {
        int op = 0;
        if(nums[0] == 0){
            op++;
        }
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] != nums[i-1]){
                op++;
            }
        }
        return op;
    }
};