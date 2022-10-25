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
    map<int, int>M;
    bool findTarget(TreeNode* root, int k) {
        if(root == NULL)
            return false;
        
        if(M.find(k - root->val) != M.end())
            return true;
        else
            M.insert({root->val, 0});
        
        return findTarget(root->left, k) || findTarget(root->right, k);
    }
};
