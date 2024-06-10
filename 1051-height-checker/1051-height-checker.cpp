class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> vec = heights;
        sort(vec.begin(),vec.end());
        int c = 0;
        for(int i = 0; i < heights.size(); i++){
            if(vec[i] != heights[i]){
                c++;
            }
        }
        return c;
    }
};