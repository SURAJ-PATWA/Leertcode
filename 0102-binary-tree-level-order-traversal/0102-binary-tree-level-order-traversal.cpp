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
        if(root==NULL)return {};
       vector<vector<int>>fans;
        queue<TreeNode *>q;
        q.push(root);
        vector<int>ans;
        while(!q.empty()){
            int count=q.size();
            for(int i=0;i<count;i++){
                TreeNode*curr=q.front();
                q.pop();
                ans.push_back(curr->val);
                if(curr->left!=NULL)q.push(curr->left);
                if(curr->right!=NULL)q.push(curr->right);
            }
            fans.push_back(ans);
            ans.clear();
        }
        return fans;
        
    }
};