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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>v;
        if(root == NULL)
            return v;
        
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int s = q.size();
            vector<int>v1;
            while(s > 0){
                TreeNode* node = q.front();
                v1.push_back(node->val);
                q.pop();
                if(node->left != NULL){
                    q.push(node->left);
                    
                }
                if(node->right != NULL){
                    q.push(node->right);
                    
                }
                s--;
            }
            v.push_back(v1);
        }
        return v;
    }
};
