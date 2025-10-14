#include <iostream>
#include <vector>
using namespace std;

vector<int> runningSum(vector<int>& nums) {
    int n = nums.size();
    vector<int> ans(n);
    ans[0] = nums[0];
    for (int i = 1; i < n; i++) {
        ans[i] = nums[i] + ans[i - 1];
    }
    return ans;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<int> result = runningSum(nums);

    cout << "Running Sum: ";
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
