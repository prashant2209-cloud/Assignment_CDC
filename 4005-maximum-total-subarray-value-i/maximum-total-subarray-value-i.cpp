class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
       
            int maximum= *max_element(nums.begin(),nums.end());
            int minimum= *min_element(nums.begin(),nums.end());
            long long res=(long long)(maximum-minimum);
            
        return res*k;
    }
};