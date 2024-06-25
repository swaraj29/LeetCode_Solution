class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        
        set<int> s;

        for(auto &i : nums){
            if(i > 0){
                s.insert(i);
            }
        }
        return s.size();
    }
};

// observation :- unique number pe hi operation performed hogaa