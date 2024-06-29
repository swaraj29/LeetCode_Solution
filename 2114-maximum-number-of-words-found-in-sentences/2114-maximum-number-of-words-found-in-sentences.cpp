class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {

        string p = "";
        int c = 0;
        int m = 0;
        for(auto &i : sentences){
            p += i;
            stringstream ss(p);
            string word;
            while(ss >> word ){
                c++;
            }
            m = max(m,c);
            c = 0;
            p.clear();
        }
        return m;

    }
};