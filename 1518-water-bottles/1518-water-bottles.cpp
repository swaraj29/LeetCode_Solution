class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int t = numBottles;

        while(numBottles >= numExchange){
                int nb = numBottles / numExchange;
                int op = numBottles % numExchange;
                t += nb;
                numBottles = op + nb;
        }
        return t;
    }
};