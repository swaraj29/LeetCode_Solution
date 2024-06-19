class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {

        // sliding window
        int sum = 0;
        double res;

        for(int i = 0; i < k; i++){
            sum += nums[i];
        }

        res = sum;

        for(int i = k; i < nums.size(); i++){
            sum = sum - nums[i-k];  // first ko hatya diya 
            sum = sum + nums[i];    // aur last ko add kar diya
            if(sum > res){
                res = sum;
            }
        }

        return res/k;
        
    }
};