// just find min element in arraya 
// then solved 

class Solution {
public:
    int minMoves(vector<int>& nums) {
        int min_num = *min_element(nums.begin(), nums.end());
        int cnt = 0;
        for(auto i : nums){
            cnt += i - min_num;
        }
        return cnt;
    }
};
