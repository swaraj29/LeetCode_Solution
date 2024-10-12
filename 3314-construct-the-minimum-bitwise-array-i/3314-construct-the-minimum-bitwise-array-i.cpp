class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, -1);

        for(int i = 0; i < n; i++){
            int v = nums[i];

            for(int j = 0; j <= v; j++){
                if( ( j | (j + 1) ) == v){
                    ans[i] = j;
                    break;
                }
            }
        }
        return ans;
    }
};