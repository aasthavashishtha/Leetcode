class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

        int len = nums.size() ;
        int count = 0 ;
        int currsum ;
        for( int i = 0 ; i < len ; i++){
            currsum = 0 ;
            for( int j = i ; j < len ; j++){
                currsum += nums[j] ;
                if(currsum == k) 
                    count++ ;
            }
        }
        return count ;
    }
};