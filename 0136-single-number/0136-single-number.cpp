class Solution {
public:
    int singleNumber(vector<int>& nums) {

        int result = 0;

        for(int i = 0; i < 32; i++){
            int temp = 1 << i;
            int zero = 0;
            int one = 0;
            for(int &num : nums){
                if( (num & temp) == 0 ){
                    zero++;
                }
                else{
                    one++;
                }
            }
            if(one % 2 == 1){
                result = result | temp;
            }
        }
        return result;
    }
};
