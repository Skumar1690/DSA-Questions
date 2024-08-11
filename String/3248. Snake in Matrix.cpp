// simple just look

class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {
        vector<vector<int>> g(n, vector<int>(n));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                g[i][j] = (i * n) + j;
            }
        }
        
        int i = 0; 
        int j = 0;
        
        for(auto e : commands){
            if(e == "RIGHT"){
                if(j < n - 1) j++;
            }
            else if(e == "LEFT"){
                if(j > 0) j--;
            }
            else if(e == "DOWN"){
                if(i < n - 1) i++;
            }
            else if(e == "UP"){
                if(i > 0) i--;
            }
        }

        int r = g[i][j];
        return r;
    }
};
