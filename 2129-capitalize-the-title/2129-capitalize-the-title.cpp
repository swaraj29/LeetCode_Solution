class Solution {
public:
    string capitalizeTitle(string title) {
        stringstream ss1(title);
        string word;
        string result = "";

        while(ss1 >> word){
            if(word.length() <= 2){
                transform(word.begin(),word.end(),word.begin(), ::tolower);
            }
            else{
                transform(word.begin(),word.end(),word.begin(), ::tolower);
                word[0] = toupper(word[0]);
            }
            if(!result.empty()){
                result += " ";
            }
            result += word;
        }

        
        return result ;
    }
};