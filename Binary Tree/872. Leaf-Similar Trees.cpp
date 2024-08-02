// itrs simple intuition just , look property of a leaf node and then solved 


class Solution {
public:
    void solve(TreeNode* root, string &s) {
        if (root == NULL) return;
        if (root->left == NULL && root->right == NULL) {
            string a = to_string(root->val);
            s += a;
        }
        solve(root->left, s);
        solve(root->right, s);
    }

    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        string s1 = "";
        string s2 = "";
        solve(root1, s1);
        solve(root2, s2);

        return s1 == s2;
    }
};
