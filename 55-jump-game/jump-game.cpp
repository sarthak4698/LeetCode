class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int lux = 0;  // Initialize lux to 0

        for (int i = 0; i < n; ++i) {
            if (i > lux) {
                return false;  // If we reach a point beyond the current reachable range
            }
            lux = max(lux, i + nums[i]);  // Update the farthest reachable index
            if (lux >= n - 1) {
                return true;  // If we can reach or exceed the last index
            }
        }

        return false;  // This line is technically unreachable due to the checks above
    }
};
