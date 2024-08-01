// EASY 
// check and store number of index 11th and 12th then compared is it > 60;

class Solution {
public:
bool check(string & s){
    int ans = 0;
    for(int i=0; i<15; i++){
        if(i== 11 || i == 12) ans = ans *10 + s[i] - '0';
    }
    return ans > 60 ;
}
    int countSeniors(vector<string>& details) {
       int n = details.size();
       int cnt =0;

       for(int i= 0; i<n; i++){
        if(check(details[i])) cnt++;
       }
        return cnt;
    }
};
