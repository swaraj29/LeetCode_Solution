class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        
        int  n = skill.size();
        vector<int> vec1;
        vector<int> vec2;
        sort(skill.begin(),skill.end());

        for(int i = 0; i < n/2; i++){
            vec1.push_back(skill[i]);
        }

        for(int i = n - 1; i >= n/2; i--){
            vec2.push_back(skill[i]);
        }

        bool flag = true;


        int sum = vec1[0] + vec2[0];
        int a = 0;

        for(int i = 0; i < n/2; i++){
            a = vec1[i] + vec2[i];
            if(a != sum){
                flag = false;
            }
        }

        long long fs = 0;
        if(flag){
            for(int i = 0; i < n/2; i++){
                fs += vec1[i] * vec2[i];
            }
        }
        else{
            return -1;
        }

        return fs;

    }
};