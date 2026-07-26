class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int maxi=max(nums.back() * nums[nums.size() - 2] * nums[nums.size() - 3],
            nums.back() * nums.front() * nums[1]);
        return maxi;
    }
};