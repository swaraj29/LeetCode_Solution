class Solution {
public:
    int minimumPushes(string word) {

        vector<int> vec(26,0);

        // now finding frequency
        for(char &ch : word){
            vec[ch - 'a']++;
        }

        sort(vec.rbegin(),vec.rend());

        int result = 0;

        for(int i = 0; i < 26; i++){
            int freq = vec[i];
            int press = i/8 + 1;
            result += press * freq; 
        }
        return result;


    }
};