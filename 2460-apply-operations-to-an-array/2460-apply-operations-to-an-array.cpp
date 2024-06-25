class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        
        int n = nums.size();
        vector<int> vec;
        for(int i = 0; i < n - 1; i++){
            if(nums[i] == nums[i+1]){
                nums[i] = 2 * nums[i];
                nums[i+1] = 0;
            }
        }

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != 0){
                vec.push_back(nums[i]);
            }
        }

        while(vec.size() < n){
            vec.push_back(0);
        }
        return vec;

    }
};