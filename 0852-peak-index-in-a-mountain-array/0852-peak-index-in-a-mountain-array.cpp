class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int start = 0;
        int end = arr.size() - 1;

        while(start < end){
            int mid = start + (end - start) / 2;

            // If mid is on the rising slope
            if(arr[mid] < arr[mid + 1]){
                start = mid + 1;
            }
            // If mid is on the falling slope
            else{
                end = mid;
            }
        }

        // Both start and end should point to the peak when the loop exits
        return start;
    }
};
