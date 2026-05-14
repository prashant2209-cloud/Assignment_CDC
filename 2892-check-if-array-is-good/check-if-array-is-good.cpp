class Solution {
public:
    bool isGood(vector<int>& nums) {
        int n = nums.size();

        // Sort the array
        sort(nums.begin(), nums.end());

        // Check numbers from 1 to n-1
        for (int i = 0; i < n - 1; i++) {
            if (nums[i] != i + 1) {
                return false;
            }
        }

        // Last element should also be n-1
        // because the largest number appears twice
        if (nums[n - 1] != n - 1) {
            return false;
        }

        return true;
    }
};