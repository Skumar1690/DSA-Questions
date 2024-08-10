class Solution {
public:
void dfson(vector<vector<char>>& grid , int i , int j){
    int n = grid.size();
    int m = grid[0].size();
    if(i<0 || i>=n || j<0 || j>=m || grid[i][j] == '0') return;
    // now going to horizant (1,0) (-1,0);
    // for vertical (0,1) - (0,-1);  i can use map also for direction ; and then find new 
    // new dir = newd = i+ dir[0];
    // newy = j+dir[1];
    grid[i][j] = '0';

    dfson(grid , i+1 , j);
    dfson(grid ,i-1,j);
    dfson(grid , i ,j+1);
    dfson(grid , i , j-1);
}
    int numIslands(vector<vector<char>>& grid) {
        int cnt = 0;
        int n = grid.size();
        int m = grid[0].size();
        for(int i =0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j]=='1'){
                    dfson(grid , i , j);
                    cnt+=1;
                }
            }
        }
        return cnt;
        
    }
};
