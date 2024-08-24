class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        
        int v = INT_MAX;
        int index = 0;

        for(int i = 0; i < arr.size(); i++){
            if(v >= arr[i]){
                v = arr[i];
            }
            else{
                v = arr[i];
                index = i;
            }
        }
        return index;
    }
};