class Solution {
public:
    int sumOfEncryptedInt(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        string s;
        for(int i = 0; i < nums.size();  i++){
            string k = to_string(nums[i]);
            sort(k.rbegin(),k.rend());
            int p = k.size();

            while(p > 0){
                s += k[0];
                p--;
            }
            sum += stoi(s);
            s.clear();
        }
        return sum;

    }
};