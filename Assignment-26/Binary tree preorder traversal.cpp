class Solution {
public:
    void preorder(TreeNode* root,vector<int>&a)
    {
        if(!root)  
        {
            return;
        }
        a.push_back(root->val);
        preorder(root->left,a);
        preorder(root->right,a);
    }
    vector<int> preorderTraversal(TreeNode* root) 
    {
        vector<int>a;
        preorder(root,a);
        return a;

    }
};
