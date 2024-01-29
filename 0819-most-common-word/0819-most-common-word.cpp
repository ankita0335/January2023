class Solution {
public:
    string mostCommonWord(string p, vector<string>& banned) {
        unordered_map<string,int>mp;
        for(int i=0;i<p.length();){
            string s="";
            while(i<p.length() && isalpha(p[i])){
                s.push_back(tolower(p[i++]));
            }
            while(i<p.length() && !isalpha(p[i]))
                i++;
            mp[s]++;
        }
        for(auto i:banned){
            mp[i]=0;
        }
        string res="";
        int cnt=0;
        for(auto i:mp){
            if(i.second>cnt){
                cnt=i.second;
                res=i.first;
            }
        }
        return res;
    }
};