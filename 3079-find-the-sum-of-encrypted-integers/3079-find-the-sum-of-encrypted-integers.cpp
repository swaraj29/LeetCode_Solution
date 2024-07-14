class Solution {
public:
    int en(int n){

        int a = 0;
        int m = 0;
        int c = 0;

        while(n){
            m = max(a, n % 10);
            n = n/10;
            c++;
        }
        int s = 0;
        while(c){
            s = s * 10 + m;
            c--;
        }
        return s;
    }
    int sumOfEncryptedInt(vector<int>& nums) {
        int sum = 0;
        for(int i = 0; i < nums.size(); i++){
            sum += en(nums[i]);
        }
        return sum;
    }
};