class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int len = nums.size() ;
        int count = 0 ;
        for( int i = 0 ; i < len ; i++ ){
            if( nums[i] < k){
                count++ ;
            }
        }
        return count ;
    }
};