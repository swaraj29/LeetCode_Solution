class Solution {
public:
    string getMappedNum(string &num, vector<int>& mapping) {
        string mappedNum = "";
        for(int i = 0; i < num.length(); i++) {
            char ch   = num[i];
            mappedNum += to_string(mapping[ch-'0']);
        }
        return mappedNum;
    }
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        int n = nums.size();
        vector<pair<int, int>> vec;

        for(int i = 0; i < n; i++) {
            string numStr     = to_string(nums[i]);
            
            string mappedStr  = getMappedNum(numStr, mapping);

            int mappedNum     = stoi(mappedStr);

            vec.push_back({mappedNum, i});
        }

        sort(begin(vec), end(vec));
        vector<int> result;

        for(auto &p : vec) {
            int originalNumIdx = p.second;
            result.push_back(nums[originalNumIdx]);
        }
        return result;
    }
};