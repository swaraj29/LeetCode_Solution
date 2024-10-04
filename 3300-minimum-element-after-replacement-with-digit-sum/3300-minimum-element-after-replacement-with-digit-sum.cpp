class Solution {
public:
    int minElement(vector<int>& nums) {

        int sum = INT_MAX;
        for(auto num : nums){
            int mi = 0;
            while(num > 0){
                int v = num % 10;
                num = num/10;
                mi += v;
            }
            sum = min(sum,mi);
        }
        return sum;
        
    }
};