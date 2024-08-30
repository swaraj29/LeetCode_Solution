class Solution {
public:
    int minFlips(int a, int b, int c) {
        
        int flips = 0;

        while(a != 0 || b != 0 || c != 0){ //Right Most Bit(MSB) == 1
            if( (c & 1) == 1){
                if( (a & 1) == 0 && (b & 1) == 0){
                    flips ++;
                }
            }
            else{//Right Most Bit(MSB) == 0
                if( (a & 1) == 1){
                    flips ++;
                }

                if( (b & 1) ==  1){
                    flips ++;
                }
            }
                a >>= 1;
                b >>= 1;
                c >>= 1;            
        }
        return flips;
    }
};

// Right Most Bit = (num & 1)
// Right shift = (num >>= 1)