class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string p = strs[0];
        for(auto &k : strs){
            for(int j = 0; j < p.size(); j++){
                if(p[j] != k[j]){
                    p.erase(j);
                }
            }
        }
        return p;
    }
};