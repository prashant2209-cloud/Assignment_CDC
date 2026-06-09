class Solution {
public:
    int numberOfSpecialChars(string word) {
        int count = 0;

        for (char ch = 'a'; ch <= 'z'; ch++) {
            bool lowerFound = false;
            bool upperFound = false;

            for (char c : word) {
                if (c == ch)
                    lowerFound = true;
                if (c == toupper(ch))
                    upperFound = true;
            }

            if (lowerFound && upperFound)
                count++;
        }

        return count;
    }
};