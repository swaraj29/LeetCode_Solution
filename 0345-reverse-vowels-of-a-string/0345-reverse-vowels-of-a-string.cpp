class Solution {
public:
    string reverseVowels(string s) {

        int n = s.size();
        vector<int> vec;
        for(int i = 0; i < n; i++)
        {
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||
            s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' ||
            s[i] =='O' || s[i] == 'U')
            {
                vec.push_back(i);
            } 
        }
        int j = 0; int k = vec.size() - 1;

        while(j < k)
        {
            char c = s[vec[j]];
            s[vec[j]] = s[vec[k]];
            s[vec[k]] = c;
            j++;
            k--;
        }
        return s;
        
    }
};