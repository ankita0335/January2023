class Solution {
public:
    void extractLeaves(TreeNode* root, vector<int>& leaves) {
        if (!root) return;
        if (!root->left && !root->right) {
            leaves.push_back(root->val);
            return;
        }
        extractLeaves(root->left, leaves);
        extractLeaves(root->right, leaves);
    }

    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> leaves1, leaves2;
        extractLeaves(root1, leaves1);
        extractLeaves(root2, leaves2);
        return leaves1 == leaves2;
    }
};
