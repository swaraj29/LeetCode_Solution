class Solution {
public:
    bool isGood(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        int a = *max_element(nums.begin(),nums.end());

        vector<int> vec;

        for(int i = 1; i <= a; i++){
            vec.push_back(i);
        }
        vec.push_back(a);

        if(nums == vec){
            return true;
        }

        return false;
        
    }
};