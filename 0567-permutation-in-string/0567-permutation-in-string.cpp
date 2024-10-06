class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.size();
        int m = s2.size();

        if(n > m){
            return false;
        }

        vector<char> s1_freq(26,0);
        vector<char> s2_freq(26,0);

        for(auto &ch : s1){
            s1_freq[ch - 'a']++;
        }

        int i = 0;
        int j = 0;
        
        while(j < m){
            s2_freq[s2[j] - 'a']++;

            while(j - i + 1 > n){
                s2_freq[s2[i] - 'a']--;
                i++;
            }

            if(s1_freq == s2_freq){
                return true;
            }
            j++;
        }

        return false;
    }
};