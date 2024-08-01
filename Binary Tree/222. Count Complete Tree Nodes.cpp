//simple concept of p.f bt 
//that is 2^h-1 = all node in pf bt
//other wise if lheigght = rheight , use this formula , else us recurion on left and then right 

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
class Solution {
public:
int getl(TreeNode* root){
    TreeNode* temp = root;
    int lh =0;
    while(temp){
        temp = temp->left;
        lh++;
    }
    return lh;
}

int getr(TreeNode* root){
    TreeNode* temp = root;
    int rh =0;
    while(temp){
        temp = temp->right;
        rh++;
    }
    return rh;
}
    int countNodes(TreeNode* root) {
        
        if(root == NULL) return 0;
        int lh = getl(root);
        int rh = getr(root);
        if(lh == rh) return (pow(2 , lh) - 1);

        return countNodes(root->left) + countNodes(root->right) + 1;  // for root
    }
};
