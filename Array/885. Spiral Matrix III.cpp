// logic of east south west north , : and step of spiral add in next step;
class Solution {
public:
    vector<vector<int>> spiralMatrixIII(int rows, int cols, int rStart, int cStart) {

        vector<vector<int>> dir = {
            {0, 1}, {1, 0}, {0, -1}, {-1, 0}
        };
        vector<vector<int>> res;
        int step = 0;
        res.push_back({rStart, cStart});
        int d = 0; // direction index

        while (res.size() < rows * cols) {

            if (d == 0 || d == 2) step++;  
            for (int cnt = 0; cnt < step; cnt++) {
                rStart += dir[d][0]; // x value
                cStart += dir[d][1]; // y value
                if (rStart >= 0 && rStart < rows && cStart >= 0 && cStart < cols) {
                    res.push_back({rStart, cStart});
                }
            }
            d = (d + 1) % 4;
        }
        return res;
    }
};
