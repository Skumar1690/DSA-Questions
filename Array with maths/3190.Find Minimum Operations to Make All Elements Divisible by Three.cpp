// hey obser the question 
// try using some maths that it

class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int cnt = 0;
        for(int i=0; i< nums.size(); i++){
            if(nums[i]%3!=0){
                  if(nums[i]==1) cnt++;
                  else if(nums[i] == 2) cnt++;

                  else if(nums[i]!=1 && nums[i] != 2){
                     int rem = nums[i]%3;
                  if(rem == 1 || rem == 2) cnt++;
                  

                  }
                 
            }
        }
        return cnt;
    }
};
