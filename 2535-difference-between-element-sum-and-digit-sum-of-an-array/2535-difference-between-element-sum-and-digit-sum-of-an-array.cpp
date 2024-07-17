class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int n = nums.size();
        int es = accumulate(nums.begin(),nums.end(),0);
        int ds = 0;
        for(int i = 0; i < n; i++){
            while(nums[i] > 9){
                int p = nums[i] % 10;
                nums[i] = nums[i] / 10; 
                ds += p;
            }
            ds += nums[i];
        }
        int k = abs(es - ds);
        return k;

    }
};