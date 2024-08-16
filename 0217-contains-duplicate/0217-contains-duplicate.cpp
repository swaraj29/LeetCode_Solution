class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> freqMap;

        for (int num : nums) {
            // Increment the frequency of num
            freqMap[num]++;
            
            // If the frequency becomes more than 1, a duplicate is found
            if (freqMap[num] > 1) {
                return true;
            }
        }
        // No duplicates found
        return false;


    }
};


        // int n = nums.size();
        // sort(nums.begin(), nums.end());
        // for(int i = 0; i < n - 1; i++)
        // {
        //     if(nums[i] == nums[i+1])
        //     {
        //         return true;
        //     }
        // }
        // return false;
