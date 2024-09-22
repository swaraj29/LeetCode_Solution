class Solution {
public:
    vector<int> lexicalOrder(int n) {
        
        vector<string> vec(n);

        for(int i = 0; i < n; i++){
            vec[i] = to_string(i + 1);
        }

        sort(vec.begin(),vec.end());

        vector<int> v(n);

        for(int i = 0; i < n; i++){
            v[i] = stoi(vec[i]);
        }
        return v;
    }
};