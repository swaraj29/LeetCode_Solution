class Solution {
public:
    string reverseStr(string s, int k) {
        for(int i = k; i < s.size(); i += 2*k){
            swap(s[i-1],s[i-k]);
        }
        return s;
        
    }
};