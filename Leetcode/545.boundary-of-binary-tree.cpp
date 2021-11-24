/**
 * Definition of TreeNode:
 * class TreeNode {
 * public:
 *     int val;
 *     TreeNode *left, *right;
 *     TreeNode(int val) {
 *         this->val = val;
 *         this->left = this->right = NULL;
 *     }
 * }
 */

class Solution {

    bool isLeaf(TreeNode* root) {
        return !root->left && !root->right;
    }

    void addLeftBoundary(TreeNode* root, vector<int> &res)
    {
        TreeNode* curr = root->left;
        while(curr)
        {
            if(!isLeaf(curr)) res.push_back(curr->val);
            if(curr->left) curr= curr->left;
            else curr= curr->right;
        }
    }

    void addRightBoundary(TreeNode* root, vector<int> &res){
        TreeNode* curr= root->right;
        vector<int> temp;

        while(curr){
            if(!isLeaf(curr)) temp.push_back(curr->val);
            if(curr->right) curr = curr->right;
            else curr = curr->left;
        }

        for(int i = temp.size()-1; i>=0; --i)
        {
            res.push_back(temp[i]);
        }
    }

    void addLeaves(TreeNode* root, vector<int> &res)
    {
        if(isLeaf(root)){
            res.push_back(root->val);
            return;
        }

        if(root->left) addLeaves(root->left, res);
        if(root->right) addLeaves(root->right, res);
    }


public:
    /**
     * @param root: a TreeNode
     * @return: a list of integer
     */
    vector<int> boundaryOfBinaryTree(TreeNode * root) {
        // write your code here
        vector<int> res;

        if(!root) return res;

        if(!isLeaf(root)) res.push_back(root->val);
        addLeftBoundary(root, res);
        addLeaves(root, res);
        addRightBoundary(root, res);

        return res;
    }
};