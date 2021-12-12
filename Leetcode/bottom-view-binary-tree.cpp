class Solution{


    public:
        vector<int> bottomView(TreeNode* root){

            vector<int> res;

            if(root == nullptr)
                return res;

            map<int, int> mp;

            queue<pair<TreeNode*, int>> q;

            q.push({root, 0});

            while(q.empty() == false){
                auto it = q.front();
                q.pop();

                TreeNode* node = it.first;
                int line = it.second;

                mp[line] = node->val;

                if(node->left != nullptr)
                    q.push({node->left, line - 1});

                if(node->right != nullptr)
                    q.push({node->right, line + 1});
            }

            for(auto it:mp){
                res.push_back(it.second);
            }

            return res;
        }
};