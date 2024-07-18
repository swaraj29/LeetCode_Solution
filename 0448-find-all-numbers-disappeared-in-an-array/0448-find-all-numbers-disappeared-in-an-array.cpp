class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> vec;
        unordered_map<int,int> mp;

        for(auto i : nums){
            mp[i]++;
        }

        for(int i = 1; i <=nums.size(); i++){
            if(mp.find(i) == mp.end()){
                vec.push_back(i);
            }
        }

        return vec;



    }
};