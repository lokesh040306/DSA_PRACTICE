class Solution {
  public:
    int largest(vector<int> &arr) {
        int large = arr[0];
        for(int i = 1; i < arr.size(); i++) {
            if(arr[i] > large) {
                large = arr[i];
            }
        }
        return large;
    }
};