class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int,int> mp;

        for(int i = 0; i < nums.size(); i++){
            int comp = target - nums[i];

            if(mp.find(comp) != mp.end()){
                return {mp[comp],i};
            }

            mp[nums[i]] = i;
        }
        return {};
    }
};