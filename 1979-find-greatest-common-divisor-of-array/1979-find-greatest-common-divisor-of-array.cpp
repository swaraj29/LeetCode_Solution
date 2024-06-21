class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int a = nums[0];
        int b = nums[nums.size() - 1];
        vector<int> vec;

        for (int i = 1; i <= a; i++) {
            if (b % i == 0 && a % i == 0) {
                vec.push_back(i);
            }
        }

        int p = *max_element(vec.begin(), vec.end());
        return p;
    }
};