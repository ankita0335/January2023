class Solution {
public:
    int c; 
    bool isPal(string &s, int i, int j) {
        while (i < j) {
            if (s[i] != s[j]) {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    int countSubstrings(string s) {
        int n = s.length();
        int c = 0; 
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                if (isPal(s, i, j)) {
                    c++; 
                }
            }
        }
        return c;
    }
};