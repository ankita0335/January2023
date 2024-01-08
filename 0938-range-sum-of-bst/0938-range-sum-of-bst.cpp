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
    void inorder(TreeNode* root,vector<int>&v){
        if(root==nullptr)   return ;
        inorder(root->left,v);
        v.push_back(root->val);
        inorder(root->right,v);
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        if(root==nullptr)   return 0;
        vector<int>v;
        int sum=0;
        inorder(root,v);
        for(int i=0;i<v.size();i++){
            if(v[i]>=low && v[i]<=high){
                sum+=v[i];
            }
        }
        return sum;
    }
};