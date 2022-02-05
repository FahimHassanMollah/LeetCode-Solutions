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
    void dfs(TreeNode* root, int index, vector<vector<int>> &result){
        if(root == NULL) return;
        
        if(result.size() == index){
            result.push_back({});
        }
        
        result[index].push_back(root->val);
        
        dfs(root->left, index + 1, result);
        dfs(root->right, index + 1, result);
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        vector<vector<int>> result;
        dfs(root, 0, result);
        return result;
    }
};