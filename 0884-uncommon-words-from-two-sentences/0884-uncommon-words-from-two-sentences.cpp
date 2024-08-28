class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        
        unordered_map<string,int> mp;
        vector<string> vec;
        
        // Corrected to split s1 and s2 into words
        stringstream ss1(s1), ss2(s2);
        string word;

        while (ss1 >> word) {
            mp[word]++;
        }

        while (ss2 >> word) {
            mp[word]++;
        }

        for(auto i : mp){
            if(i.second == 1){
                vec.push_back(i.first);
            }
        }

        return vec;
    }
};
