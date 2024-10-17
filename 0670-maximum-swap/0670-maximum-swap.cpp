class Solution {
public:
    int maximumSwap(int num) {
        
        string p = to_string(num);  

        int l = -1;
        int r = -1;

        int maxdig = -1;

        for(int i = p.size() - 1; i >= 0; i--){
            if(p[i] - '0' > maxdig){
                maxdig = p[i] - '0';
                r = i;
            }
            else{
                l = i;
            }
        }

        if(l != -1){
            swap(p[l], p[r]);
        }
 
        return stoi(p);

    }
};