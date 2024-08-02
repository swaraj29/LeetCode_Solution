class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n = nums.size();

        vector<int> temp(2 * n);

        for(int i = 0; i < 2*n; i++){
            temp[i] = nums[i % n];      // {0,1,1,0} ---> {0,1,1,0,0,1,1,0};
        }

        // window size containing all ones we need
        int totalOnes = accumulate(nums.begin(),nums.end(),0);

        int i = 0;
        int j = 0;
        int currOnes = 0;
        int maxCount = 0;

        while(j < 2*n){
            if(temp[j] == 1){
                currOnes++;
            }
            if(j - i + 1 > totalOnes){
                currOnes -= temp[i]; // 0,1;
                i++;
            }
            maxCount = max(maxCount,currOnes);
            j++; 
        }
        return totalOnes - maxCount;
    }
};