// first find each node's index with and then level order traversle , queue (bfs)


typedef unsigned long long ll;

class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        if (root == NULL) return 0;
        queue<pair<TreeNode*, ll>> q;
        ll maxi = 0;
        q.push({root, 0});
        while (!q.empty()) {
            int n = q.size();
            ll l = q.front().second;
            ll r = q.back().second;
            maxi = max(maxi, r - l + 1);
            while (n--) {
                auto [node, i] = q.front();
                q.pop();
                if (node->left != NULL) q.push({node->left, 2 * i + 1});
                if (node->right != NULL) q.push({node->right, 2 * i + 2});
            }
        }
        return static_cast<int>(maxi);
    }
};
