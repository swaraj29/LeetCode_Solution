class Solution {
public:
    int minimumPushes(string word) {
        int tp = 0;
        for(int i = 0; i < word.size(); i++){
            if(i < 8){
                tp += 1;
            }
            else if(i >= 8 && i < 16){
                tp += 2;
            }
            else if(i >= 16 && i < 24){
                tp += 3;
            }
            else{
                tp += 4;
            }
        }
        return tp;
    }
};