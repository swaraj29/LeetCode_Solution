class Solution {
public:
    bool isBoomerang(vector<vector<int>>& points) {
        // Extracting the coordinates for easier access
        int x1 = points[0][0], y1 = points[0][1];
        int x2 = points[1][0], y2 = points[1][1];
        int x3 = points[2][0], y3 = points[2][1];
        
        // Using the determinant (shoelace formula) to check if the area of the triangle is zero
        // Area = 0.5 * | x1*(y2 - y3) + x2*(y3 - y1) + x3*(y1 - y2) |
        // If the area is zero, then the points are collinear
        int area = x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2);
        
        return area != 0;
    }
};
