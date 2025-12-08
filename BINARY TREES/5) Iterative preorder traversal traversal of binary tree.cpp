/*

class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {

        vector<int> preorder;
    
        if(root == nullptr) {
            return preorder;
        }
        
        // Create a stack to stores nodes during traversal
        stack<TreeNode*> st;
        st.push(root);
        
        while(!st.empty()) {

            // Get the current node from the top of the stack
            root = st.top();
            st.pop();
            
            // Add the node's value to the preorder traversal result
            preorder.push_back(root->val);
            
            // Push the right child onto the stack if exists
            if(root->right != nullptr) {
                st.push(root->right);
            }
            
            // Push the left child onto the stack if exists
            if(root->left != nullptr) {
                st.push(root->left);
            }
        }
            
        return preorder;
    }
};

*/