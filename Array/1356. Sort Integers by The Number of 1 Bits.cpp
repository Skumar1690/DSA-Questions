
class Solution {
    private:
    int solve(int n){
        int count=0;
        while(n>0){
            if(n%2==1)count++;
            n=n>>1;
        }
        return count;

    }
public:
    vector<int> sortByBits(vector<int>& arr) {
        vector<pair<int,int>>v(arr.size());
        for(int i=0;i<arr.size();i++){
             v[i]={solve(arr[i]),arr[i]};
        }
        sort(v.begin(),v.end());
        vector<int>ans;
        for(int i=0;i<v.size();i++){
            ans.push_back(v[i].second);

        }
        return ans;
    }
};
