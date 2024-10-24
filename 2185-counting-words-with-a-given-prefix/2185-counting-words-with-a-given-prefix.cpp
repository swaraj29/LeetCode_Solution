class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        
        int count = 0;
        int n = pref.size();
        for(auto &word : words){
            string s = word;
            string p = s.substr(0,n); 
            if(p == pref){
                count++;
            }
        }
        return count;
    }
};