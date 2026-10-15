class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int score=0;
        for(int i=0;i<nums.size();i++){
            unordered_set<int> st;
            for(int j=i;j<nums.size();j++){
                st.insert(nums[j]);
                int dist=st.size();
                score += dist*dist;
            }
        }
        return score;
    }
};