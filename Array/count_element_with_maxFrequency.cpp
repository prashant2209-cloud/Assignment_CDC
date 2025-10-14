#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int maxFrequencyElements(vector<int>& nums) {
    unordered_map<int, int> freq;
        int maxFreq = 0;

        for (int num : nums) {
            freq[num]++;
            maxFreq = max(maxFreq, freq[num]);
        }

        int ans = 0;
        for (auto &p : freq) {
            if (p.second == maxFreq) {
                ans += p.second;
            }
        }
        return ans;
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int result = maxFrequencyElements(nums);

    cout  << result << endl;

    return 0;
}
