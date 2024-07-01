class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        set<int>s;
        int n = digits.size();
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                for(int k = 0; k < n; k++){
                    if(i != j && j != k && k != i){
                        int nums = digits[i] * 100 + digits[j]*10 + digits[k];
                        if(digits[i] != 0 && nums % 2 == 0){
                            s.insert(nums);
                        } 
                    }
                }
            }
        }
        vector<int> r(s.begin(),s.end());
        sort(r.begin(),r.end());
        return r;
        
    }
};