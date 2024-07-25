class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        unordered_map<int,int> mp;

        for(auto &num :nums){
            mp[num]++;
        }

        int minE = *min_element(nums.begin(),nums.end());
        int maxE = *max_element(nums.begin(),nums.end());

        int i = 0;

        for(int num = minE; num <= maxE; num++){
            while(mp[num] > 0){
                nums[i] = num;
                i++;
                mp[num]--;
            }
        }
        return nums;
    }
};

// counting sort use karte hai jab input particular range me rahtaa hai
