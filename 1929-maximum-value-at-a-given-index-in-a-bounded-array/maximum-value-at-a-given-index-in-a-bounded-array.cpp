class Solution {
public:
    int maxValue(int n, int index, int maxSum) {
        if(n==1) return maxSum;
        maxSum-=n;
        int left = index,right = n-index-1,ans=1;

        int t1=-1,t2=-1;
        while(maxSum) {
            t1++; t2++;
            int x = min(t1,left)+min(t2,right)+1;

            if(maxSum<x) break;  maxSum-=x;
            ans++;
            if(x==(left+right+1)) {
                ans+=(maxSum/x); break;
            }
        }
        return ans;
    }
};