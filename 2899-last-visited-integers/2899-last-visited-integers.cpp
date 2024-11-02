class Solution {
public:
    vector<int> lastVisitedIntegers(vector<int>& nums) {
        vector<int> ans;
        vector<int> seen;
        int k = 0;

        for(int num : nums){
            if(num > 0){
                seen.insert(seen.begin(), num);
                k = 0;
            }
            else{
                k++;
                if(k <= seen.size()){
                    ans.push_back( seen[k - 1] );
                }
                else{
                    ans.push_back(-1);
                }
            }
        }
        return ans;
    }
};