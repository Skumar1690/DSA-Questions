# brute force approach - 


// Simple but o(n^2)

class Solution {
public:
    int minimumDeletions(string s) {
        int cnt = 0;
        int n = s.length();
        int i=0;
        while(i<n-1){
            if(s[i] == 'b' && s[i+1] == 'a'){
                   cnt++;
                s.erase(s.begin() + i , s.begin() + i +2);
                n-=2;
               if(i>0)i--;
                
         }
          else
            i++;
        }
        return cnt;
    }
};



// optimaising it by min count of b
// 2} approach

class Solution {
public:
    int minimumDeletions(string s) {
        int ans =0;
        int cnt_b = 0;
        for(auto i : s){
            if(i == 'b') cnt_b++;
            else
            ans = min(ans + 1 , cnt_b);
        }
        return ans;
    }
};
