class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int> vec1(n);
        vector<int> vec2(n);
        vector<int> ans(n);
        int ls = 0;
        int rs = 0;

        // Calculate left sums
        for(int i = 0; i < nums.size(); i++) {
            if(i == 0) {
                vec1[i] = ls;
            } else {
                ls += nums[i - 1];
                vec1[i] = ls;
            }
        }

        // Calculate right sums
        for(int i = n - 1; i >= 0; i--) {
            if(i == n - 1) {
                vec2[i] = rs;
            } else {
                rs += nums[i + 1];
                vec2[i] = rs;
            }
        }

        // Calculate the absolute difference
        for(int i = 0; i < n; i++) {
            int k = abs(vec1[i] - vec2[i]);
            ans[i] = k;
        }

        return ans;
    }
};
