class Solution {
public:
    string addBinary(string a, string b) {
        int n = a.size() - 1;
        int m = b.size() - 1;
        int carry = 0;
        string result = "";

        while(n  >= 0 || m >= 0 || carry){
            int p = n >= 0 ? a[n--] - '0' : 0;
            int q = m >= 0 ? b[m--] - '0' : 0;

            int sum = p + q + carry;
            char k = sum % 2 + '0';
            result = k + result;
            carry = sum / 2;
        }
        return result;
    }
};