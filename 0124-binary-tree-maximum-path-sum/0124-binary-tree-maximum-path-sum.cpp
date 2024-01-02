class Solution {
public:
    vector<int> inorder(TreeNode* root, vector<int>& v) {
        if (root == nullptr) return v;  
        inorder(root->left, v);
        v.push_back(root->val);
        inorder(root->right, v);
        return v;
    }
    int maxPathSum(TreeNode* root) {
        if (root == nullptr) return 0;
        int maxSum = INT_MIN;
        maxPathSumHelper(root, maxSum);
        return maxSum;
    }
private:
    int maxPathSumHelper(TreeNode* node, int& maxSum) {
        if (!node) return 0;
        int leftSum = max(0, maxPathSumHelper(node->left, maxSum));
        int rightSum = max(0, maxPathSumHelper(node->right, maxSum));
        maxSum = max(maxSum, node->val + leftSum + rightSum);
        return node->val + max(leftSum, rightSum);
    }
};
