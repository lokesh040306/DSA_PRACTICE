/*

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {

        // BREADTH FIRST SEARCH

        vector<vector<int>> result;

        if(root == NULL) return result;

        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL); // level seperator

        vector<int> ans; // to store the nodes of the each level

        while(!q.empty()) {
            TreeNode* temp = q.front();
            q.pop();
            
            if(temp == NULL) {
                // level one is completed
                result.push_back(ans);
                // before moving forward make 'ans' empty
                ans.clear();

                // if there is another level then add level seperator
                if(!q.empty()) {
                    q.push(NULL);
                }
            }
            else {
                ans.push_back(temp -> val);

                if(temp -> left) {
                    q.push(temp -> left);
                }

                if(temp -> right) {
                    q.push(temp -> right);
                }
            }
        }
        return result;
    }
};

*/