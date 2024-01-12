class Solution {
public:
    bool isVowel(char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
               c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
    }
    bool halvesAreAlike(string s) {
        int cleft = 0, cright = 0;
        int n = s.size();
        int i = 0, j = n / 2;
        
        while (i < n / 2 && j < n) {
            if (isVowel(s[i])) cleft++;
            if (isVowel(s[j])) cright++;
            i++;
            j++;
        }
        return cleft == cright;
    }
};
