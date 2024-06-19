class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int s = 0;
        unordered_map<int, int> mp;

        // Count occurrences of each number
        for (auto i : nums) {
            mp[i]++;
        }

        // Sum up the unique numbers
        for (auto i : mp) {
            if (i.second == 1) {
                s += i.first;
            }
        }

        return s;
    }
};
