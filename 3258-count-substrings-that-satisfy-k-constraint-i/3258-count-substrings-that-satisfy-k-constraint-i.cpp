class Solution {
public:
    int countKConstraintSubstrings(string s, int k) {
        
        int count0 = 0;
        int count1 = 0;
        int i = 0;
        int j = 0;
        int n = s.size();
        int result = 0;
        while(j < n){
            if(s[j] == '0'){
                count0 ++;
            }
            else{
                count1 ++;
            }
            while(count0 > k && count1 > k){
                if(s[i] == '0'){
                    count0 --;
                }
                else{
                    count1 --;
                }
                i++;
            }
            result += (j - i + 1);
            j++;
        }
        return result;
    }
};