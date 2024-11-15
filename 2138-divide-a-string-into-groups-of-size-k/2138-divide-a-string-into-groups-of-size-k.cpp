class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        
        int n = s.size();
        vector<string> vec;

        for(int i = 0; i < n; i+=k){
            string part = s.substr(i,k);

            if(part.size() < k){
                part.append(k-part.size(), fill);
            }
            vec.push_back(part);
        }
        return vec;
    }
};