# solved
# intuition similar to hinding height of tree that give all last node and indicate it


class Solution {
public:
    map<int, vector<int>> mp; //ordered map will give the result in desired order
    int Height(TreeNode* root) {
        if(!root)
            return 0;
        
        int H = 1 + max(Height(root->left), Height(root->right));
        
        mp[H].push_back(root->val);

        return H;
    }
    vector<vector<int>> findLeaves(TreeNode * root) {       
        mp.clear();
        Height(root);

        vector<vector<int>> result;
        for(auto &it : mp) {
            result.push_back(it.second);
        }

        return result;
    }
};
