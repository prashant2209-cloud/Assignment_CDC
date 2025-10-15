#include <bits/stdc++.h>
using namespace std;

void Reverse(vector<int>& nums, int start, int end) {
    while (start < end) {
        int temp = nums[start];
        nums[start] = nums[end];
        nums[end] = temp;
        start++;
        end--;
    }
}

void rotate(vector<int>& nums, int k) {
    k = k % nums.size();
    if (k < 0) {
        k += nums.size();
    }
    int n = nums.size();
    Reverse(nums, 0, n - k - 1);
    Reverse(nums, n - k, n - 1);
    Reverse(nums, 0, n - 1);
}

int main() {
    int n, k;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    cin >> k;

    rotate(nums, k);
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
