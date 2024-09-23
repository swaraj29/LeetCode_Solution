class Solution {
public:
    bool reportSpam(vector<string>& message, vector<string>& bannedWords) {

        unordered_set<string> s(bannedWords.begin(),bannedWords.end());
        int mc = 0;

        for(string &m : message){
            if(s.find(m) != s.end()){
                mc++;
            }
        }

        return mc >= 2 ? true : false;


    }
};