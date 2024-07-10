class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
        set<int> st;

        for(auto& k : nums){
            int s = k[0];
            int e = k[1];

            while(s <= e){
                st.insert(s);
                s++;
            }
        }
        return st.size(); 
    }
};
