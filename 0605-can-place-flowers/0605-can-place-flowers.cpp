class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {

        int k = flowerbed.size(); // 5
        int count = 0;            // abhi 0  ped lage hai

        for (int i = 0; i < k; i++) {
            // jahaa pe ped lagnaa hai uske peeche aur aage jagah khaali rahnaa
            // chahiyaa
            if (flowerbed[i] == 0 && (i == 0 || flowerbed[i - 1] == 0) &&
                (i == k - 1 || flowerbed[i + 1] == 0)) {
                count++;
                flowerbed[i] = 1;

                if (count >= n) {
                    break;
                }
            }
        }

        return count >= n ? true : false;
    }
};

// array of bound ki condition ko dura karnaa hai iske liyaa hum ek cheez kareg
// i == 0 and i == k - 1 pe array pof bound degaa agar hum nahi lagay in dono ko
// isko doora karne ke liya hum or ke saath ye dono conditon lagaya do chal
// jygaa