class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int> ans(num_people, 0); // Initialize result vector with num_people elements, all initialized to 0
        int give = 1;
        int i = 0;

        while (candies > 0) {
            // Distribute candies to the current person
            if (candies < give) {
                ans[i] += candies;
                break;
            }
            ans[i] += give;
            candies -= give;
            i++;
            give++;
            i = i % num_people; // Ensure i wraps around to 0 when it exceeds num_people - 1
        }

        return ans;
    }
};
