class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        
        int sum = 0;
        int c = 0;

        for(int i = 0; i < nums.size(); i++){
            sum ^= nums[i];
        }

        bitset<32> x = sum;

        bitset<32> p = k;

        for(int i = 0; i < x.size(); i++){
            if(x[i] != p[i]){
                c++;
            }
        }
        return c; 
    }
};