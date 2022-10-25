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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root == NULL){
            TreeNode* newNode = new TreeNode(val);
            root = newNode;
            return root;
        }
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int s = q.size();
            bool flag = false;
            while(s > 0){
                TreeNode* node = q.front();
                if(node->val > val){
                    if(node->left == NULL){
                        TreeNode* newNode = new TreeNode(val);
                        node->left = newNode;
                        flag = true;
                        break;
                    }
                    else
                        q.push(node->left);
                }else{
                    if(node->right == NULL){
                        TreeNode* newNode = new TreeNode(val);
                        node->right = newNode;
                        flag = true;
                        break;
                    }
                    else
                        q.push(node->right);
                }
                s--;
                q.pop();
            }
         if(flag)
            break;
        }
        return root;
    }
};
