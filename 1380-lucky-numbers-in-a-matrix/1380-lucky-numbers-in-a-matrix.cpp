class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {

        int a = matrix.size();
        int b = matrix[0].size();
        map<int,int> m;

        for(int i = 0; i < a; i++)
        {
            int t = INT_MAX;
            for(int j = 0; j < b; j++)
            {
                if(matrix[i][j] < t)
                {
                    t = matrix[i][j];
                }
            }
            m[t]++;
        }

        for(int j = 0; j < b; j++)
        {
            int t = INT_MIN;
            for(int i = 0; i < a; i++)
            {
                if(matrix[i][j] > t)
                {
                    t = matrix[i][j];
                }
            }
            m[t]++;
        }



        vector<int> vec;

        for(auto i : m)
        {
            if(i.second > 1)
            {
                vec.push_back(i.first);
            }
        }
        return vec;

    }
};