#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    set<int> s;
    for (int i = 0; i < nums.size(); i++) {
        s.insert(nums[i]);
    }
    int j = 0;
    for (auto k : s) {
        nums[j] = k;
        j++;
    }
    return s.size();
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int newSize = removeDuplicates(nums);

    for (int i = 0; i < newSize; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;


    return 0;
}
