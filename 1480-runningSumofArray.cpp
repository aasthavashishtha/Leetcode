class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> ans ;
        int sum = 0 ;
        int len = nums.size() ;
        for( int i = 0 ; i < len ; i++){
            sum += nums[i] ;
            ans.push_back(sum) ;
        }
        return ans ;
    }
};