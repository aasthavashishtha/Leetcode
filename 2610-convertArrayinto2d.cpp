#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        int len = nums.size();
        vector<vector<int>> ans;

        for (int i = 0; i < len; i++) {
            int count = 0;
            for (int j = i - 1; j >= 0; j--) {
                if (nums[i] == nums[j])
                    count++;
            }
            // Ensure the ans vector has enough rows
            if (ans.size() <= count) {
                ans.resize(count + 1);
            }
            ans[count].push_back(nums[i]);
        }
        return ans;
    }
};
