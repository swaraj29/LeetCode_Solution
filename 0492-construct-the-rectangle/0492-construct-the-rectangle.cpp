class Solution {
public:
    vector<int> constructRectangle(int area) {
        int m = sqrt(area);
        while(area % m != 0){
            m--;
        }
        return {area/m,m}; 
    }
};