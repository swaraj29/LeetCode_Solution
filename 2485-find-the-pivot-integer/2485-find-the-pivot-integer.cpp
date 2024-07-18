class Solution {
public:
    int pivotInteger(int n) {

        if(n == 1){
            return n;
        }
        int ts = ( n * (n + 1) ) / 2;

        int leftsum = 0;
        int rightsum = 0;

        for(int i = 1; i <= n; i++){
            leftsum += i;

            if(leftsum == rightsum){
                return i;
            }
            else{
                rightsum = ts - leftsum;
            }
        }
        return -1;
        
    }
};