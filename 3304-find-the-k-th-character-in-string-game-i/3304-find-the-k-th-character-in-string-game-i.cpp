class Solution {
public:
    char kthCharacter(int k) {

        string w = "a";

        while(w.size() < k){
            string nw = "";

            for(char &c : w){
                if(c == 'z'){
                    nw += 'a';
                }
                else{
                    nw += (c + 1);
                }
            }
            w += nw;
        }

        return w[k-1];
    }
};