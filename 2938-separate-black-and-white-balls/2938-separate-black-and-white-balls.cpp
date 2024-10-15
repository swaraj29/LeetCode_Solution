class Solution {
public:
    long long minimumSteps(string s) {
        
        int onecount = 0;
        long long swap = 0;
        for(char c : s){
            if(c == '1'){
                onecount++;
            }
            else{
                swap += onecount;
            }
        }
        return swap; 
    }
};