class Solution {
public:
    int numberOfSteps(int num) {
        int steps = 0;
        while(num){
            if(num % 2 == 0){
                num = num/2;
                steps++;
            }
            else{
                num = num - 1;
                steps++;
            }
        }
        return steps;
        
    }
};