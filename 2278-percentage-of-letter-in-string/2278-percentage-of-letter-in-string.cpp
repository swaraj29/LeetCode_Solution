class Solution {
public:
    int percentageLetter(string s, char letter) {
        
        int n = s.size();
        int count = 0;
        for(auto k : s){
            if(k == letter){
                count++;
            }
        }

        return (count*100)/n;
    }
};