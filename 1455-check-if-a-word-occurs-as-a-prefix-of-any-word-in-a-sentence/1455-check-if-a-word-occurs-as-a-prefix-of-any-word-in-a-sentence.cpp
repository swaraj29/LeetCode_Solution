class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        
        int index = 1;
        stringstream ss1(sentence);
        string word;
        while(ss1 >> word){
            string k = word.substr(0,searchWord.size());
            if(k == searchWord){
                return index;
            }
            index++;
            
        }
        return -1;
    }
};