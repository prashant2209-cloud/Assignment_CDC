class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(!nums.size()) return 0;
        sort(nums.begin(),nums.end());
        int large=1,cnt=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]+1){
                cnt++;
            }else if(nums[i]==nums[i-1]) continue;
            else{
                large=max(large,cnt);
                cnt=1;
            }
        }
        return max(large,cnt);
    }
};