// easy 


class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int cnt = 0;
        int ten = 0;

        for(auto i : bills) {
            if(i == 5) {
                cnt++;
            } else if(i == 10) {
                if(cnt > 0) {
                    cnt--;
                    ten++;
                } else {
                    return false;
                }
            } else if(i == 20) {
                if(cnt > 0 && ten > 0) {
                    cnt--;
                    ten--;
                } else if(cnt >= 3) {
                    cnt -= 3;
                } else {
                    return false;
                }
            }
        }

        return true;
    }
};
