class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        int n = nums.size();
        multiset<int> st;
        int i = 0;
        int j = 0;
        int maxLength = 0;

        while (j < n) {
            st.insert(nums[j]);

            while (*st.rbegin() - *st.begin() > limit) {
                st.erase(st.find(nums[i]));
                ++i;
            }

            maxLength = max(maxLength, j - i + 1);
            j++;
        }

        return maxLength;
    }
};

// multiset property
// 1. duplicate element rak saktaa hai
// 2. element ko sorted order me rakhegaa jisase hume max aur min ele mil jaaygaa.
// 3. delete element efficiently
// 4.pointer ke through value nikalni hoti to star(*) lagana padtaa hai