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

    int dfs(TreeNode* root, int k){
        if(root == NULL){
            return 0;
        }
       
        int cnt =0;
        if(root->left){

         dfs(root->left , k);
         cnt++;
        }
       
        dfs(root,k);
         if(root->right){
        dfs(root->right,k);
         }
     if(cnt == k){
        return root;
     }

    }
    int kthSmallest(TreeNode* root, int k) {

        if(root == NULL){
            return 0;
        }

         int ans = dfs(root ,k);

        return ans;
        
    }
};
