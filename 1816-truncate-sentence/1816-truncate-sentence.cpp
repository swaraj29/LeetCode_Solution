class Solution {
public:
    string truncateSentence(string s, int k) {
        stringstream ss(s);
        string word,sen;

        while(ss >> word && k){
            sen += word + " ";
            k--;
        }
        sen.pop_back();
        return sen;
    }
};