class Solution {
public:
    int numberOfPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        
        int c = 0;
        for(int i = 0; i < nums2.size(); i++){
            nums2[i] = nums2[i] * k;
        }

        for(int j = 0; j < nums2.size(); j++){
            for(int i = 0; i < nums1.size(); i++){
                if(nums1[i] % nums2[j] == 0){
                    c++;
                }
            }
        }

        return c;


    }
};