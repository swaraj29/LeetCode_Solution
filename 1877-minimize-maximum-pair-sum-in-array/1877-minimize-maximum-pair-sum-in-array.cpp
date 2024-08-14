class Solution {
public:
    int minPairSum(vector<int>& nums) {
        
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int m = 0;
        int i = 0;
        int j = n - 1;

        while(i < j){
            m = max(m, nums[i] + nums[j]);
            i++;
            j--;
        }
        return m;
            

        
    }
};