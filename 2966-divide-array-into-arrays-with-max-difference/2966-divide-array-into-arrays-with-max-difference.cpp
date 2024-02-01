class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        vector<vector<int>> vv;
        sort(nums.begin(), nums.end());
        int i = 0;
        while (i < nums.size()) 
        {
            if (nums[i + 1] - nums[i ] <= k && nums[i+2]-nums[i+1]<=k && nums[i+2]-nums[i]<=k)
            {
                vector<int> v;
                v.push_back(nums[i]);
                v.push_back(nums[i+1]);
                v.push_back(nums[i+2]);
                vv.push_back(v);
                i += 3;  
            } 
            else 
            {
                return {};
            }
        }
        return vv;
    }
};
