class Solution {
public:
    void postorder(TreeNode* root,vector<int>&a)
    {
        if(!root)  
        {
            return;
        }
        postorder(root->left,a);
        postorder(root->right,a);
        a.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) 
    {
        vector<int>a;
        postorder(root,a);
        return a;

    }
};
