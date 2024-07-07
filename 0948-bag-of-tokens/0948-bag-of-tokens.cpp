class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int P) {
        int n = tokens.size();
        sort(tokens.begin(), tokens.end());
        
        int currScore = 0;
        int maxScore  = 0;
        int i = 0, j = n-1;

        //:GREEDY
        //While losing power, I will choose the smallest token
        //While gainin power, I will choose the largest token
        
        while(i <= j) {
            if(P >= tokens[i]) {
                currScore++;
                maxScore = max(maxScore, currScore); //keep updating it
                P -= tokens[i]; //choose smallest token
                i++;
                
            } else if(currScore >= 1) {
                currScore--;
                P += tokens[j]; //choose largest token
                j--;
                
            } else {
                //no way further to increase score
                return maxScore;
            }
        }
        return maxScore;
    }
};


// power gavaa kar score ++ hogaa par power gavaa gae chotaa waala
// score gavaa kar power increase par sabse bada power increase karege
// greedy is used when input is less and dp is used when input is more