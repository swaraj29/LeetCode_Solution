class Solution {
public:
    std::vector<int> constructRectangle(int area) {
        int w = sqrt(area);
        std::vector<int> result;
        
        for (int width = w; width >= 1; --width) {
            if (area % width == 0) {
                int length = area / width;
                result.push_back(length);
                result.push_back(width);
                break;  // Found the minimum difference pair, no need to continue
            }
        }
        
        return result;
    }
};
