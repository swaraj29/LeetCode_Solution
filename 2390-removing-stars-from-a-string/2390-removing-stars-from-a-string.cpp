class Solution {
public:
    string removeStars(string s) {
        int n = s.size();
        stack<char> st;
        string t = "";

        for(int i = 0; i < n; i++){
            if( !st.empty() && s[i] == '*'){
                t.pop_back();
            }
            else{
                st.push(s[i]);
                t += s[i];
            }
 
        }
        return t;


    }
};