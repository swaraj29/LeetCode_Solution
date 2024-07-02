class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();

        vector<int> vec;

        unordered_map<int,int> mp;

        for(auto i : nums){
            mp[i]++;
        }

        for(auto k : mp){
            if(k .second > n/3)
            vec.push_back(k.first);
        } 
        return vec; 
    }
};