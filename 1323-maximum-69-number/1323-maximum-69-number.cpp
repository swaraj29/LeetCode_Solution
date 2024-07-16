class Solution {
public:
    int maximum69Number (int num) {

        string p = to_string(num);

        for(int i = 0; i < p.size(); i++){
            int k = p[i] - '0';
            if(k == 6){
                p[i] = '9';
                break;
            }
        }
        return stoi(p);



    }
};