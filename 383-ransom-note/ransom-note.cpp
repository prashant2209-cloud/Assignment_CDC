class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int n=ransomNote.size(),m=magazine.size();
        if(n>m) return false;
        unordered_map<char,int> str;
        for(char c : magazine){
            str[c]++;
        }
        for(char c : ransomNote){
            if(str[c]<=0){
                return false;
            }
            str[c]--;
        }
        return true;
    }
};