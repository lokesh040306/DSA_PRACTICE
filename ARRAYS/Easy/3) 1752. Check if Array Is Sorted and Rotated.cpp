class Solution {
public:
    bool check(vector<int>& nums) {
        
        int n = nums.size();
        int count = 0;
        for(int i = 1; i < n; i++) {
            if(nums[i] < nums[i-1]) {
                if(nums[0] < nums[n-1]) return false;
                count++;    // It determines the array is rotated only at one place
            }
        }

        if(count < 2) {
            return true;
        }
        else {
            return false;
        }
    }
};