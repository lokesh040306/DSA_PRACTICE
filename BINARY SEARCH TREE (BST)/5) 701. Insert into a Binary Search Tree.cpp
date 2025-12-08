/*

class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        
        // base case
        if(root == NULL) {
            // We are at NULL node, create new node and return
            root = new TreeNode(val);
            return root;
        }

        if(root -> val > val) {
            // Left part me insert karo 
            root -> left = insertIntoBST(root -> left, val);
        }
        else {
            // Right part me insert karo
            root -> right = insertIntoBST(root -> right, val);
        }
        
        // Return the original root of the Tree
        return root;
    }
};

*/