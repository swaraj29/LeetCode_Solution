class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        int offset = 0;
        for(int space : spaces){
            s.insert(s.begin() + space + offset, ' ');
            offset++;
        }
        return s;
    }
};