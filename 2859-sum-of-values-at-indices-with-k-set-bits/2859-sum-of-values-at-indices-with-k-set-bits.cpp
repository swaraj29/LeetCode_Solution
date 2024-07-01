class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int s = 0;

        for(int i = 0; i < nums.size(); i++){
            bitset<32> p(i);

            if(p.count() == k){
                s += nums[i];
            }
        }
        return s;
    }
};
