// simple intiution , 
//just add all subarray in v;
//then  sort 
//and then l t= r sum;

class Solution {
public:
  long long mod = 1e9+7;
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<int> v;
        for(int i = 0; i < n; i++) {
            int sum = 0;
            for(int j = i; j < n; j++) {
                sum += nums[j];
                v.push_back(sum);
            }
        }

        sort(v.begin(), v.end());

        int i = left - 1;
        int j = right - 1;
        long long sum1 = 0;
        while(i <= j) {
            sum1 = (sum1 + v[i]) % mod;
            i++;
        }

        return sum1;
    }
};
