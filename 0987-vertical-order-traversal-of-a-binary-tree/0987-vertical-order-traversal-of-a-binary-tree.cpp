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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>> ans;
        queue<pair<TreeNode*, pair<int, int>>> q;  //node, vertical, level
        map<int, map<int, multiset<int>>> mp;  // vertical, level node (multiset is used to make it unique and sorted in ascending order)
        q.push({root, {0, 0}});
        vector<int> p;
        while(!q.empty()){
            auto t = q.front();
            q.pop();
            TreeNode* node = t.first;
            int v = t.second.first;
            int l = t.second.second;
            mp[v][l].insert(node->val);
            if(node->left){
                q.push({node->left, {v-1, l+1}});
            }
            if(node->right){
                q.push({node->right, {v+1, l+1}}); 
            }
        }
        for(auto i : mp){
        vector<int> col;
            for(auto j : i.second){
                col.insert(col.end(), j.second.begin(), j.second.end()); //syntax : (position(where to add), iterator1(from where to begin), iterator2 (from where to end))
            }
            ans.push_back(col);
            }
        return ans;
    }
};