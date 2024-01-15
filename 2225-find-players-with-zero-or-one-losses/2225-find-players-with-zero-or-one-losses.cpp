class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& ms) {
        map<int,int> mp;
        vector<vector<int>> v(2);
        for(auto i : ms ){
            mp[i[1]]++;
             mp[i[0]] = mp[i[0]];
        }
        for(auto [i, c] : mp){
            if( c == 0 ) v[0].push_back(i);
            if( c == 1 ) v[1].push_back(i);
        }
        return v;
    }
};