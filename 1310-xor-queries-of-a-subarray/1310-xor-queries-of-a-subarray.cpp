class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        
        int n = arr.size();
        vector<int> vec;

        for(auto querie : queries){
            int a = querie[0];
            int b = querie[1];
            int value = 0;
            for(int i = a; i <= b ; i++){
                value = value ^ arr[i];
            }
            vec.push_back(value);
        }

        return vec;
    }
};