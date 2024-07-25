class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {

        map<int,int> mp;

        for(auto num : nums){
            mp[num]++;
        }

        vector<int> vec;

        for(auto it : mp){
            while(it.second != 0){
                vec.push_back(it.first);
                it.second--;
            }
        }
        return vec;
    }
};