#include <bits/stdc++.h>
using namespace std;

int pivotIndex(vector<int>& nums) {
    int totalsum = 0;
    int leftsum = 0;

    for (int num : nums) {
        totalsum += num;
    }

    for (int i = 0; i < nums.size(); i++) {
        if (leftsum == totalsum - leftsum - nums[i]) {
            return i;
        }
        leftsum += nums[i];
    }
    return -1; 
}

int main() {
    int n;
    
    cin >> n;

    vector<int> nums(n);
    
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int pivot = pivotIndex(nums);

    if (pivot != -1)
        cout << "Pivot index is: " << pivot << endl;
    else
        cout << "No pivot index found." << endl;

    return 0;
}
