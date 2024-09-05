class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> mp;

        for(auto i : nums){
            mp[i]++;
        }

        for(auto i : mp){
            if(i.second == 1){
                return i.first; 
            }
        }
        return 0;
    }
};