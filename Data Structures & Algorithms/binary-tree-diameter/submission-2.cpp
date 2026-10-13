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

    int height(TreeNode* root){

     int diameter =0;
          if(root == NULL){
            return 0;
        }
        int left = height(root->left);
        int right = height(root->right);

        diameter =max(diameter, left+right);
        int maxheight = left+right;

        return maxheight;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        height(root);
        return diameter;
       
        
        
    }
};
