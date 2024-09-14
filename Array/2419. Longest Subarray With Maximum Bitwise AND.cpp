// find how  many max ele,emt consistent;

class Solution {
public:
    int longestSubarray(vector<int>& nums) {

        int n = nums.size();

        if(n == 0) return 0;

        int cnt =1;
        int maxi = *max_element(nums.begin() , nums.end());
        int maxif =0;
        int i =0;
        while(i<n){
            if(nums[i] == maxi){
                cnt++;
                maxif = max(cnt , maxif);
            }
            else{
                cnt =1;
            }
            i++;
        }
        return max(maxif , cnt) - 1;
    }
};
