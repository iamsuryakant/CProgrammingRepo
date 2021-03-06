/*
 * @lc app=leetcode id=993 lang=cpp
 *
 * [993] Cousins in Binary Tree
 */

// @lc code=start
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
    int xdepth, ydepth, xparent, yparent;

    void depthT(TreeNode* root, int x, int y, int d, int p_val)
    {
        if (root == nullptr) return;

        if(root->val == x){
            xdepth = d;
            xparent = p_val;
            return;
        }

        if(root->val == y){
            ydepth = d;
            yparent = p_val;
            return;
        }

        depthT(root->left, x, y, d+1, root->val);
        depthT(root->right, x, y, d+1, root->val);
    }

    bool isCousins(TreeNode* root, int x, int y) {      

        if(root->val == x || root->val == y) {
            return false;
        }

        depthT(root, x, y, 0, 0);

        if(xdepth == ydepth && xparent != yparent) {
            return true;
        }
        return false;
    }
};
// @lc code=end

