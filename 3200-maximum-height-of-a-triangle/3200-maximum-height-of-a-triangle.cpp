class Solution {
public:
    int maxHeightOfTriangle(int red, int blue) {
        int c = 1;  // c represents the current row number (starting from 1)
        int rowsStartingWithRed = 0;  // counts the number of rows when starting with red
        int rowsStartingWithBlue = 0;  // counts the number of rows when starting with blue

        int r = red;
        int b = blue;

        // Calculate rows starting with red
        while (r >= 0 && b >= 0) {
            if (c % 2 == 1) {  // Odd rows use red balls
                r -= c;
            } else {  // Even rows use blue balls
                b -= c;
            }

            if (r < 0 || b < 0) {
                break;
            }

            rowsStartingWithRed++;  // Increment the row count
            c++;  // Move to the next row
        }

        c = 1;
        r = blue;
        b = red;

        // Calculate rows starting with blue
        while (r >= 0 && b >= 0) {
            if (c % 2 == 1) {  // Odd rows use red balls (but here red is blue and blue is red)
                r -= c;
            } else {  // Even rows use blue balls (but here blue is red and red is blue)
                b -= c;
            }

            if (r < 0 || b < 0) {
                break;
            }

            rowsStartingWithBlue++;  // Increment the row count
            c++;  // Move to the next row
        }

        // Return the maximum number of rows from both strategies
        return std::max(rowsStartingWithRed, rowsStartingWithBlue);
    }
};
