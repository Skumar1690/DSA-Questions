// obesr choicing of book with widh and height 
// using recursion , with making choice tha one should keep or move to next cell so that minimise the height  according to width;
// and final retun the min(h, skip h)


class Solution {
public:
int n; 
int width;
  int t[1001][1001];
int solve(vector<vector<int>>& books, int i , int Rw , int maxi){
    //bs c 
    if(i>=n) return maxi;

    
        if(t[i][Rw] != -1) {
            return t[i][Rw];
        }

    int thik = INT_MAX;
    int aage = INT_MAX;
    int bw = books[i][0];
    int bh = books[i][1];

    if(bw <= Rw){
        thik = solve(books, i+1 , Rw - bw , max(bh , maxi));
    }
    aage = solve(books , i+1 , width - bw , bh) + maxi;

    return t[i][Rw] =  min(thik , aage);
    
}
    int minHeightShelves(vector<vector<int>>& books, int shelfWidth) {
         memset(t, -1, sizeof(t));
        n = books.size();
        width = shelfWidth;
        
        int r = shelfWidth;
        int ans = solve(books, 0 , r , 0); // (book , cuurent positio ,  r , cuurent h)
        return ans;
    }
};
