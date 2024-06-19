class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        for(int i = 0; i < nums.size() && k > 0; i++){
            if(nums[i] < 0){
                nums[i] = -nums[i];
                k--;
            }
            else{
                break;
            }
        }
        sort(nums.begin(),nums.end());
        int s = 0;
        for(int i = 1; i < nums.size(); i++){
            s += nums[i];
        }
        if(k % 2 == 1){
            s += -nums[0];
        }
        else{
            s += nums[0];
        }
        return s;   
    }
};