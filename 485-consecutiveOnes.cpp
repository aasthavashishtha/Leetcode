class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int allSum = 0 ;
        int eleSum = 0 ;
        int len = nums.size() ;
        for( int i=0 ; i < len ; i++){
            allSum += i+1 ;
            eleSum += nums[i] ;
        }

        return (allSum - eleSum) ;
    }
};