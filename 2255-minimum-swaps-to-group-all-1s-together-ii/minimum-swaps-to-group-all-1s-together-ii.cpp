class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n = nums.size();

        int cnt = 0;
        for (int x : nums) {
            if (x == 1) cnt++;
        }

        if (cnt <= 1) return 0;

        int zeroCnt = 0;

        for (int i = 0; i < cnt; i++) {
            if (nums[i] == 0) zeroCnt++;
        }

        int ans = zeroCnt;

        for (int i = cnt; i < n + cnt; i++) {
            if (nums[(i - cnt) % n] == 0) zeroCnt--;
            if (nums[i % n] == 0) zeroCnt++;

            ans = min(ans, zeroCnt);
        }

        return ans;
    }
};