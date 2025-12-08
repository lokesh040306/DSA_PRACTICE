/*

class Solution {
  public:
    int findCeil(Node* root, int x) {
        
        int ceilEle  = -1;
        
        if(root == NULL) {
            return ceilEle ;
        }
        
        while(root != NULL) {
            
            if(root -> data == x) {
                return root -> data;
            }
            
            if(root -> data > x) {
                ceilEle  = root -> data;
                root = root -> left;
            }
            else {
                root = root -> right;
            }
        }
        
        return ceilEle ;
    }
};

*/