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
class BSTIterator {
public:
    vector<TreeNode*>v;
    TreeNode* ptr;
    int i=0;
    
    void inorder(TreeNode* root){
        if(!root) return;
        inorder(root->left);
        v.push_back(root);
        inorder(root->right);
    }
    
    BSTIterator(TreeNode* root) {
        inorder(root);
    }
    
    int next() {
        ptr=v[i];
        i++;
        return ptr->val;
    }
    
    bool hasNext() {
        cout<<i<<" ";
        TreeNode* node;
        if(i<v.size()) node=v[i];
        return node?true:false;
    }
};
/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */