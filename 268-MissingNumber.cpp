#include<vector>
using namespace std;
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ans=0;
        int size=nums.size();
        for(int i=0;i<=size;i++)
            ans+=i;     //sum of n numbers from 0 to nums size
        for( auto it : nums)
            ans-=it;
        return ans;
    }
};