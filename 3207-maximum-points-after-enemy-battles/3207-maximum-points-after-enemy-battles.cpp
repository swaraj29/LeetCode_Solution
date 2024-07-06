class Solution {
public:
    long long maximumPoints(vector<int>& enemyEnergies, int currentEnergy) {
        
        int n = enemyEnergies.size();
        int i = n - 1;
        long long p = 0;

        sort(enemyEnergies.begin(),enemyEnergies.end());

        if(enemyEnergies[0] > currentEnergy) return 0;
        while(i >= 0){
            if(currentEnergy >= enemyEnergies[0]){
                p += currentEnergy/enemyEnergies[0];
                currentEnergy %= enemyEnergies[0];
            }
            else{
                currentEnergy += enemyEnergies[i];
                i--;
            }
        }
        return p;
    }
};