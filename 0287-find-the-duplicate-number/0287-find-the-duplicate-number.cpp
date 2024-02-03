class Solution {
public:
    int findDuplicate(std::vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++) 
        {
            int ind = abs(nums[i]) - 1;
            if(nums[ind] > 0) 
            {
                nums[ind] = -nums[ind];
            } 
            else
            {
                return abs(nums[i]);
            }
        }
        return -1; 
    }
};
