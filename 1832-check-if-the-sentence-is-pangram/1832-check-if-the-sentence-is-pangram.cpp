class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int>v(26,0);
        for(char ch:sentence){
            int idx=ch-'a';
            v[idx]++;
        }
        for(int c:v){
            if(c==0)    return false;
        }
        return true;
    }
};