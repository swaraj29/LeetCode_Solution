class Solution {
public:
    int maximumLength(vector<int>& nums) {
        
        int x = 0, odd = 0, even = 0, both = 0;
        int c = nums[0] % 2; // Expected parity for alternating sequence

        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] % 2 == 0) even++;
            else odd++;
            if(nums[i] % 2 == c) {
                both++;
                c = 1 - c; // Toggle parity expectation
            }
        }

        x = max(both, max(even, odd));
        return x;
    }
};
