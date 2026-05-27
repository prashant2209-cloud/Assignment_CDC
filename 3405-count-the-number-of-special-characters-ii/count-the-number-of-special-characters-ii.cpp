class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<int> lastLower(26, -1);
        vector<int> firstUpper(26, -1);


        // last occurrence of lowercase
        // first occurrence of uppercase
        for (int i = 0; i < word.size(); i++) {
            char c = word[i];

            if (c >= 'a' && c <= 'z') {
                lastLower[c - 'a'] = i;
            } 
            else {
                int idx = c - 'A';

                if (firstUpper[idx] == -1)
                    firstUpper[idx] = i;
            }
        }

        int count = 0;

        // Check condition:
        // every lowercase occurs before first uppercase
        for (int i = 0; i < 26; i++) {
            if (lastLower[i] != -1 &&
                firstUpper[i] != -1 &&
                lastLower[i] < firstUpper[i]) {
                count++;
            }
        }

        return count;
    }
};