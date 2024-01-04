#include <vector>
#include <algorithm>

class Solution {
public:
    int minOperations(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int ans = 0;
        int s = 0;
        while (s < nums.size()) {
            int e = s;
            while (e < nums.size() && nums[e] == nums[s]) {
                e++;
            }
            int cnt = e - s;
            if (cnt == 1) {
                return -1;
            }
            ans += cnt / 3;
            if (cnt % 3 != 0) {
                ans++;
            }
            s = e;
        }
        return ans;
    }
};
