class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int index = -1;
        // first find decreasing element index
        for(int i = n - 1; i > 0; i--){
            if(nums[i] > nums[i - 1]){
                index = i - 1;
                break;
            }
        }
        // find increasing elment index
        if(index != -1){
            int s = index;
            for(int j = n - 1; j >= index + 1; j--){
                if(nums[j] > nums[index]){
                    s = j;
                    break;
                }
            }
            swap(nums[index],nums[s]);
        }
        reverse(nums.begin() + index + 1, nums.end());
        
    }
};

// three steps happens
// 1. find first  gola index of decreasing element
// 2. then swap the next greater element with the gola index
// 3. reverse from gola index