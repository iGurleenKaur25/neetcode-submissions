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

    
    bool isBalanced(TreeNode* root) {

        if(root ==NULL){
            return 0;
        }

        int left = isBalanced(root->left);
        int right= isBalanced(root->right);

        if(height[left] - height[right] < 1){
            return false;
        }
        
        
    }
};
