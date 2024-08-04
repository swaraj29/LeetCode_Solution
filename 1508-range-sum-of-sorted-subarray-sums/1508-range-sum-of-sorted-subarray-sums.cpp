class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        
        int size = n * (n + 1) / 2;

        vector<int> vec;

        for (int i = 0; i < n; i++) {
            int sum = 0;
            for (int j = i; j < n; j++) {
                sum += nums[j];
                vec.push_back(sum);
            }
        }

        sort(vec.begin(),vec.end());
        int ts = 0;
        int e = 1000000007;

        // Note: We need to adjust left and right to be 0-indexed
        for (int i = left - 1; i <= right - 1; i++) {
            ts = (ts + vec[i]) % e;
        }
        return ts;
    }
};
