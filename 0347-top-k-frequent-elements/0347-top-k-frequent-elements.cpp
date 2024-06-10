class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> vec;
        unordered_map<int,int> mp;
        for(auto i : nums){
            mp[i]++;
        }
        for(auto p : mp){
            if(p .second >= k){
                vec.push_back(p.first);
            }
        }
        return vec;
        
    }
};