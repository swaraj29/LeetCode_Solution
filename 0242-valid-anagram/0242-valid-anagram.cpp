class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(t.begin(),t.end());
        sort(s.begin(),s.end());

        if(s == t){
            return true;
        }
        return false;
    }
};