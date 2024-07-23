class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        map<int, int> mp;

        for(auto i : nums){
            mp[i]++;
        }

        vector<pair<int, int>> vec;

        for(auto it : mp){
            vec.push_back({it.second, it.first});
        }

        // Custom comparator function
        auto comparator = [](const pair<int, int>& a, const pair<int, int>& b) {
            if (a.first == b.first) {
                return a.second > b.second;
            }
            return a.first < b.first;
        };

        sort(vec.begin(), vec.end(), comparator);

        vector<int> result;
        for(auto it : vec){
            for(int i = 0; i < it.first; i++){
                result.push_back(it.second);
            }
        }

        return result;
    }
};
