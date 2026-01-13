/*
By Rushabh Gala
rushabhvg
GitHub:
https://github.com/rushabhvg
StackOverflow:
https://stackoverflow.com/users/16571212/rushabhvg
LinkedIn:
https://www.linkedin.com/in/rushabhvg/
*/

class Solution {
public:
    double separateSquares(vector<vector<int>>& squares) {
        double totalArea = 0;
        double low = 2e9;
        double high = 0;

        for (auto& sq : squares) {
            double lowY = sq[1];
            double side = sq[2];
            totalArea += side * side;
            low = min (low, lowY);
            high = max (high, lowY + side);
        }

        double tgtArea = totalArea / 2;

        for (int i = 0; i < 100; i++) {
            double mid = low + ((high - low) / 2.0);
            double currArea = 0;

            for (auto &sq : squares) {
                double lowY = sq[1];
                double side = sq[2];
                double heightBelow = max(0.0, min (side, mid - lowY));
                currArea += heightBelow * side;
            }

            if (currArea < tgtArea) {
                low = mid;
            } else {
                high = mid;
            }
        }

        return high;
    }
};

/*
By Rushabh Gala
rushabhvg
GitHub:
https://github.com/rushabhvg
StackOverflow:
https://stackoverflow.com/users/16571212/rushabhvg
LinkedIn:
https://www.linkedin.com/in/rushabhvg/
*/
