// here intuition of becktracking 1) kya mei leaf pr hu  (left == null & right == null) sum ==  target , it mean good store this ,
// if  not at leaf then call recursion on left and right and then backtack of initial valvue tha store ;
// lets go by code

class Solution {
public:
vector<vector<int>>res;

void solve(TreeNode* root , int sum , vector<int>& temp , int target){
    if(root == NULL) return ;
    sum += root->val;
    temp.push_back(root->val);
    if(root->left == NULL && root->right == NULL){
        if(sum == target) {
            res.push_back(temp);
        }
      
    }
    else {
        solve(root->left , sum , temp , target);
    solve(root->right ,sum , temp , target);
    }
    temp.pop_back();
}

    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        int sum =0;
        vector<int>temp;
        solve(root , sum , temp , targetSum);

        return res;
    }
};
