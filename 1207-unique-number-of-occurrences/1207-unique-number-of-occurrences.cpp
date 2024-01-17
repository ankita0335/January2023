class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n=arr.size();
        map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
       set<int>freq;
       for(auto i:mp){
           freq.insert(i.second);
       }
        if(freq.size()==mp.size()){
            return true;
        }
        return false;
    }
};