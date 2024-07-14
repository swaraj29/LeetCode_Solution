class Solution {
public:
    bool isprime(int a){
        int b  = 0;
        if(a == 1){
            return false;
        }
        for(int i = 2; i < a; i++){
            if(a % i == 0 ){
                return false;

            }
        }
        // if(b == 2){
        //     return true;
        // }
        return true;
        

    }
    int countPrimeSetBits(int left, int right) {
        int co = 0;
        while(left <= right){
            bitset<32> b(left);
            int c = b.count();
            bool p = isprime(c);
            if(p){
                co++;
            }
            left++; 
        }
        return co;
    }
};