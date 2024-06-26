class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        vector<vector<int>> ans;

        int i = 0, j = 0;
        int n = nums1.size();
        int m = nums2.size();

        while (i < n || j < m) {
            if (i == n) {
                // All elements of nums1 are finished, add remaining elements from nums2
                ans.push_back({nums2[j][0], nums2[j][1]});
                j++;
            } else if (j == m) {
                // All elements of nums2 are finished, add remaining elements from nums1
                ans.push_back({nums1[i][0], nums1[i][1]});
                i++;
            } else {
                // Both arrays have elements left to process
                if (nums1[i][0] == nums2[j][0]) {
                    // IDs are the same, sum their values and add to result
                    ans.push_back({nums1[i][0], nums1[i][1] + nums2[j][1]});
                    i++;
                    j++;
                } else if (nums1[i][0] < nums2[j][0]) {
                    // Add the element from nums1 with the smaller ID
                    ans.push_back({nums1[i][0], nums1[i][1]});
                    i++;
                } else {
                    // Add the element from nums2 with the smaller ID
                    ans.push_back({nums2[j][0], nums2[j][1]});
                    j++;
                }
            }
        }

        return ans;
    }
};
