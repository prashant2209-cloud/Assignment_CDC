class Solution {
public:
    int minimumEffort(vector<vector<int>>& tasks) {
        sort(tasks.begin() , tasks.end() , [](const vector<int>& a , const vector<int>& b){
            return a[1] - a[0] < b[1] - b[0];
        });
        int res = 0;
        for(int i = 0, n = tasks.size(); i < n; ++i){
            int need = res + tasks[i][0], mini = tasks[i][1];
            res = max(need , mini);
        }
        return res;
    }
};