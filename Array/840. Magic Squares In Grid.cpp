// properties of magicmatrix of 3x3;

class Solution {
public:
    bool ismagic(vector<vector<int>>& v, int x, int y) {
        unordered_set<int> s;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                int num = v[x+i][y+j];
                if (num < 1 || num > 9 || s.count(num)) return false;
                else
                    s.insert(num);
            }
        }
        int sum = v[x][y] + v[x][y+1] + v[x][y+2];
        for (int i = 0; i < 3; i++) {
            if ((v[x+i][y] + v[x+i][y+1] + v[x+i][y+2]) != sum) return false; // row sum;
        }
        for (int i = 0; i < 3; i++) {
            if ((v[x][y+i] + v[x+1][y+i] + v[x+2][y+i]) != sum) return false;  // col sum
        }
        int d1 = v[x][y] + v[x+1][y+1] + v[x+2][y+2];
        int d2 = v[x][y+2] + v[x+1][y+1] + v[x+2][y];
        if (d1 != sum || d2 != sum) return false;

        return true;
    }

    int numMagicSquaresInside(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int cnt = 0;
        for (int i = 0; i <= n - 3; i++) {
            for (int j = 0; j <= m - 3; j++) {
                if (ismagic(grid, i, j)) cnt++;
            }
        }
        return cnt;
    }
};
