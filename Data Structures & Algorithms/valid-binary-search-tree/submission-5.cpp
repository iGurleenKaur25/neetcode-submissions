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
    bool isValidBST(TreeNode* root) {
        int min = INT_MIN;
        int max = INT_MAX;
         if(root == nullptr){
            return true;
         }
        TreeNode* left = root->left;
        TreeNode* right = root->right;

        if((left !=NULL && min < left->val < root->val) || (right!=NULL && max > right->val > root->val)){
            return true;
        }
    return false;  
    }
};
