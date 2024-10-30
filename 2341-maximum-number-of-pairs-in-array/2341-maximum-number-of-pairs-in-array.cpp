class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        
        unordered_map<int, int> mp;
        vector<int> vec;

        for (auto pair : nums) {
            mp[pair]++;
        }

        int count = 0;
        int leftovers = 0;

        for (auto i : mp) {
            count += i.second / 2; 
            leftovers += i.second % 2;
        }

        vec.push_back(count);  
        vec.push_back(leftovers); 

        return vec;
    }
};
