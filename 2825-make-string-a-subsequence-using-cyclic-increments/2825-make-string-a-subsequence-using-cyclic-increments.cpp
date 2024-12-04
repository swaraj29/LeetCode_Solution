class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) {
        
        int m = str1.size();
        int n = str2.size();
        int i = 0;
        int j = 0;

        while(i < m && j < n){
            if( str1[i] == str2[j] || (str1[i] - 'a' + 1)%26 + 'a' == str2[j]){
                j++;
            }
            i++;
        }
        return j == n;
    }
};