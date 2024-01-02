class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_map<int,int>mp;
        vector<vector<int>>v;
        for(int i=0;i<nums.size();i++){
            int freq=mp[nums[i]];
            if(freq==v.size()){
                v.push_back({});
            }
            v[freq].push_back(nums[i]);
            mp[nums[i]]++;
        }
        return v;
    }
};