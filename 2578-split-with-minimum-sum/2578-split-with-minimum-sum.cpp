class Solution {
public:
    int splitNum(int num) {

        string a = to_string(num);

        sort(a.begin(), a.end());

        string num1 = "";
        string num2 = "";
        for(int i = 0; i < a.size(); i++){
            if(i % 2 == 0){
                num1 += a[i];
            }
            else{
                num2 += a[i];
            }
        }

        int sum = stoi(num1) + stoi(num2);

        return sum;
    }
};
