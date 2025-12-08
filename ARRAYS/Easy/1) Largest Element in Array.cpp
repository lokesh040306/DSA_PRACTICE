/*

class Solution {
  public:
    int largest(vector<int> &arr) {
        // considering first element as largest
        int large = arr[0];
        // comparing with remaining elements if there exists a largest
        for(int i = 1; i < arr.size(); i++) {
            if(arr[i] > large) {
                large = arr[i];
            }
        }
        return large;
    }
};

*/
