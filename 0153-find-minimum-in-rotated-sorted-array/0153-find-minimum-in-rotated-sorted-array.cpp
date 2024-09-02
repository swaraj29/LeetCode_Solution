class Solution {
public:
    int findMin(vector<int>& nums) {
        int start = 0;
        int end = nums.size() - 1;

        while(start < end){
            int mid = start + (end - start) / 2;

            // If mid is greater than end, the minimum is in the right half
            if(nums[mid] > nums[end]){
                start = mid + 1;
            }
            // Otherwise, the minimum is in the left half or at mid
            else{
                end = mid;
            }
        }

        // Start should now point to the minimum element
        return nums[start];
    }
};
