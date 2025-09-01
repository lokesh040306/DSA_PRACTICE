class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // considering the first element as large
        int large = arr[0], slarge = -1;
        for(int i = 1; i < arr.size(); i++) {
            // updating slarge as we found the new large
            if(arr[i] > large) {
                slarge = large;
                large = arr[i];
            }
            
            // checking for new slarge
            if(arr[i] < large && arr[i] > slarge) {
                slarge = arr[i];
            }
        }
        return slarge;
    }
};