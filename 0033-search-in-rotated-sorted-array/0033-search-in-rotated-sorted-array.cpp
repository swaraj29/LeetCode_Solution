class Solution {
public:
    int findPivot(vector<int>& nums, int n){
        int l = 0;
        int r = n - 1;

        while(l < r){
            int mid = l + (r - l)/2;

            if(nums[mid] > nums[r]){
                l = mid + 1;
            }
            else{
                r = mid;
            }
        }
        return l;
    }

    int binarySearch(vector<int>& nums, int l, int r, int target) {
        int idx = -1;
        while(l <= r) {
            int mid = l + (r-l)/2;
            if(nums[mid] == target){
                idx = mid;
                break;
            }
            else if(nums[mid] < target){
                l = mid + 1;
            }
            else{
                r = mid - 1;
            }
        }
        return idx;
    }

    int search(vector<int>& nums, int target) {
        int n = nums.size();

        int pivot_index = findPivot(nums, n);

        // left side of pivot index
        int idx = binarySearch(nums, 0, pivot_index-1, target);

        if(idx != -1){
            return idx;
        }

        // right side of pivot index
        idx = binarySearch(nums, pivot_index, n - 1, target);

        return idx;
    }
};


// pivot_index = jahaa se array two parts mein divide hogaa
