
// jsut store all string frequency and take in another vector that has 1 fre. and k -1 position return 

class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string , int>mp;
        for(auto &ch : arr){
            mp[ch]++;
        }
        vector<string>ans;
        for(int i =0; i<arr.size(); i++){
            if(mp[arr[i]] == 1) ans.push_back(arr[i]);

        }
        if(k<=ans.size()) return ans[k-1];
        else
        return "";
        
    }
};
