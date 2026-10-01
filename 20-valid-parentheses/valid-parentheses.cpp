class Solution {
public:
    bool isValid(string s) {
        if (s.length() % 2 != 0) return false;

        vector<char> stack(s.length());
        int cnt = 0;

        for (char c : s) {
            if (c == '(') {
                stack[cnt++] = ')';
            } else if (c == '{') {
                stack[cnt++] = '}';
            } else if (c == '[') {
                stack[cnt++] = ']';
            } else {
                if (cnt == 0 || stack[--cnt] != c) {
                    return false;
                }
            }
        }

        return cnt == 0;
    }
};