// just thinking about how find last digit the check , is it  maximum then stor ///
// next check how much digit then for it maxi digit as same length digit and retunt the encrypt function 

class Solution {
public:
    int encrypt(int x){
        int temp = x;
        int stor_max = INT_MIN;
        while(x){
            int last = x % 10;
            x /= 10;
            stor_max = max(stor_max, last);
        }
        int res = 0;
        while(temp){
            temp/=10;
            res = res*10 + stor_max;
        }
        return res;
    }

    int sumOfEncryptedInt(vector<int>& nums) {
        int sum = 0;  
        for(auto i: nums){
           int r = encrypt(i);
           sum += r;
        }
        return sum;
    }
};
