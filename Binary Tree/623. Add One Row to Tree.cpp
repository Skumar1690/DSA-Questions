// first find the level where to add just before it curleve == depth-1 so have to add it on right and left both side and oginal oe after tha 

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

// using DFS 


class Solution {
public:
    TreeNode* solve(TreeNode* root, int val, int depth, int cur) {
        if (root == NULL) return NULL;
        if (cur == depth - 1) {
            TreeNode* ltemp = root->left;
            TreeNode* rtemp = root->right;
            root->left = new TreeNode(val);
            root->right = new TreeNode(val);
            root->left->left = ltemp;
            root->right->right = rtemp;
            return root;
        }
        root->left = solve(root->left, val, depth, cur + 1);
        root->right = solve(root->right, val, depth, cur + 1);
        return root;
    }

    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if (depth == 1) {
            TreeNode* newRoot = new TreeNode(val);
            newRoot->left = root;
            return newRoot;
        }
        return solve(root, val, depth, 1);
    }
};
