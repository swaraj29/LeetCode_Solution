class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        int p = 0;
        map<int, int> mp;

        // Count frequencies of even numbers
        for (int num : nums) {
            if (num % 2 == 0) {
                mp[num]++;
                p = max(p, mp[num]);
            }
        }

        int mf = -1;
        for (const auto& it : mp) {
            if (it.second == p) {
                mf = it.first;
                break;
            }
        }

        return mf;
    }
};
