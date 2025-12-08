/*

class Solution {
  public:
    int floor(Node* root, int x) {
        
        int floorEle = -1;
        
        if(root == NULL) {
                return floorEle;
            }
        
        while(root != NULL) {
            
            if(root -> data == x) {
                return root -> data;
            }
            
            if(root -> data > x) {
                root = root -> left;
            }
            else {
                floorEle = root -> data;
                root = root -> right;
            }
        }
        return floorEle;
    }
};

*/