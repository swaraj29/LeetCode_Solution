class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        
        priority_queue<int> maxHeap(nums.begin(),nums.end());
        long long score = 0;
        for(int i = 0; i < k; i++){
            int maxElement = maxHeap.top();
            maxHeap.pop();
            score += maxElement;
            maxHeap.push(ceil(maxElement/3.0));
        }
        return score;
    }
};