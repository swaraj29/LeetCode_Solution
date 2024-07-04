class Solution {
public:
    int helper(int r, int b){
        int c = 1;
        int rows = 0;

        while(r >= 0 && b >= 0){
            if(c % 2 == 1){
                r -= c;
            }
            else{
                b -= c;
            }

            if(r < 0 || b < 0){
                return rows;
            }
            rows++;
            c++;
        }

        return rows;
    }
    int maxHeightOfTriangle(int red, int blue) {
        int ans = 0;
        ans = max( helper(red,blue), helper(blue,red));
        return ans;
    }
};