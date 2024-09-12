class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        
        int count = 0;

        for(auto word : words){
            bool iscon = true;

            for(char ch : word){
                if(allowed.find(ch) == string::npos){
                    iscon = false;
                    break;
                }
            }
            if(iscon){
                count++;
            }
        
        }

        return count;
    }
};