class Solution {
public:
    bool containzero(int m){
        while(m){
            int r = m % 10;
            if(r == 0){
                return false; // Return true if m contains zero
            }
            m = m / 10;
        }
        return true; // Return false if no zero found in m
    }
    
    vector<int> getNoZeroIntegers(int n) {
        vector<int> vec;
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= n; j++) {
                if( i + j == n && containzero(j) && containzero(i) ) {
                    vec.push_back(i);
                    vec.push_back(j);
                    return vec; // Return immediately after finding the pair
                }
            }
        }
        return vec; // Return an empty vector if no valid pair is found
    }
};
