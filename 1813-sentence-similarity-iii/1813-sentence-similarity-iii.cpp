class Solution {
public:
    bool areSentencesSimilar(string sentence1, string sentence2) {
        vector<string> vec1,vec2;

        if(sentence2.size() > sentence1.size()){
            swap(sentence1,sentence2);
        }
        stringstream ss1(sentence1), ss2(sentence2);
        string word;

        while(ss1 >> word){
            vec1.push_back(word);
        }
        while(ss2 >> word){
            vec2.push_back(word);
        }

        int i = 0;
        int j = vec2.size() - 1;
        int k = vec1.size() - 1;
        while(i < vec2.size() && vec1[i] == vec2[i]){
            i++;
        }

        while(j > -1 && vec1[k] == vec2[j]){
            k--;
            j--;
        }

        return i > j;



    }
};