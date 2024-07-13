class Solution {
public:
    int sumofdigits(int n){
        int sum = 0;
        while(n > 0){
            sum += n % 10;
            n = n/10;
        }
        return sum;
    }
    int countBalls(int lowLimit, int highLimit) {
        unordered_map<int,int> mp;
        int maxBalls = 0;
        for(int i = lowLimit; i <= highLimit; i++){
            int k = sumofdigits(i);
            mp[k]++;
            maxBalls = max(maxBalls, mp[k]);
        }
        return maxBalls;  
    }
};