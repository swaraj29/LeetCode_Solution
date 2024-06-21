class Solution {
public:
    string largestGoodInteger(string num) {
        int n = num.size();
        string res = "";
        int maxNum = -1;
        for(int i = 0; i < n - 2; i++) {
            if(num[i] == num[i+1] && num[i+1] == num[i+2]) {
                string goodInteger = num.substr(i, 3);
                int currentNum = stoi(goodInteger);
                if(currentNum > maxNum) {
                    maxNum = currentNum;
                    res = goodInteger; 
                }
                i += 2; 
            }
        }
        return res;
    }
};
