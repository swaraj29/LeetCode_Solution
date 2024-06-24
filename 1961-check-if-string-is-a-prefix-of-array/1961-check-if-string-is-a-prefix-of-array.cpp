class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        
        string p = "";
        bool flag = true;

        for(auto &i : words){
            p += i;
        }
        for(int i = 0; i < s.size(); i++){
            if(s[i] != p[i]){
                flag = false;
            }
        }

        return flag;
    }
};