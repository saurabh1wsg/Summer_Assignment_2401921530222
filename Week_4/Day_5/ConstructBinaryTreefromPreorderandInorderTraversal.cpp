class Solution {
public:
    unordered_map<int, int> mp;

    TreeNode* build(vector<int>& preorder, int ps, int pe, vector<int>& inorder, int is, int ie) {
        if (ps > pe || is > ie) return NULL;

        TreeNode* root = new TreeNode(preorder[ps]);
        int idx = mp[preorder[ps]];
        int leftSize = idx - is;

        root->left = build(preorder, ps + 1, ps + leftSize, inorder, is, idx - 1);
        root->right = build(preorder, ps + leftSize + 1, pe, inorder, idx + 1, ie);

        return root;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        for (int i = 0; i < inorder.size(); i++)
            mp[inorder[i]] = i;

        return build(preorder, 0, preorder.size() - 1, inorder, 0, inorder.size() - 1);
    }
};
