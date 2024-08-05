class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        int n = arr.size();
        int count = 0;

        for(int i = 0; i < n; i++){
            string s = arr[i];
            bool flag = true;

            // Check if 's' appears more than once in the array
            for(int j = 0; j < n; j++){
                if(i != j && s == arr[j]){
                    flag = false;
                    break;
                }
            }

            if(flag){
                count++;
            }

            if(count == k){
                return s;
            }
        }

        return "";
    }
};
