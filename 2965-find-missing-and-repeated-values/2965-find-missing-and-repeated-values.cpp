class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int> vec;
        int r = grid.size();
        int c = grid[0].size();

        vector<int> ans;
        unordered_map<int,int> mp;

        for(int i = 0; i < r; i++){
            for(int j = 0; j < c; j++){
                vec.push_back(grid[i][j]);
            }
        }

        sort(vec.begin(),vec.end());

        for(auto i : vec){
            mp[i]++;
        }

        for(auto it : mp){
            if(it.second >= 2){
                ans.push_back(it.first);
            }
        }
        int max_val = r * c;

        for(int i = 1; i <= max_val; i++){
            if(mp.find(i) == mp.end()){
                ans.push_back(i);
            }
        }
        return ans;
    }
};