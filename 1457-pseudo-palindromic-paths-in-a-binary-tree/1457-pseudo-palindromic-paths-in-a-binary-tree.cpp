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
    int res=0;
    void traversal(TreeNode* root , vector<int>&count){
        if(root==nullptr)   return;
        count[root->val]++;
        if(root->left ==nullptr && root->right==nullptr)    
        {
            int c=0;
            for(int i=1;i<=9;i++){
                if(count[i]%2!=0){
                    c++;
                }
            }
            if(c<=1)    res=res+1;
        }
        traversal(root->left,count);
        traversal(root->right,count);
        count[root->val]--;
        
    }
    int pseudoPalindromicPaths (TreeNode* root) {
        vector<int>count(10,0);
        traversal(root,count);
        return res;
    }
};