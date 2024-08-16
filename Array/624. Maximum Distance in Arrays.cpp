// ascending 

//easy

class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int n = arrays.size();
        
        int mini = arrays[0][0];
        int maxi = arrays[0].back();
        int maxd = 0;

        for(int i = 1; i < n; i++){
            int curmini = arrays[i][0];
            int curmaxi = arrays[i].back();

            maxd = max(maxd, abs(maxi - curmini));
            maxd = max(maxd, abs(curmaxi - mini));

            mini = min(mini, curmini);
            maxi = max(maxi, curmaxi);
        }
        return maxd;
    }
};
