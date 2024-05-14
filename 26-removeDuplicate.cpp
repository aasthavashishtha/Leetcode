class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int len = nums.size() ;
        if( len == 1 )
            return len ;
        
        int i = 0 ;
        for( int j = 1 ; j < len ; j++) {
            if( nums[i] != nums[j]) 
            {
                i++ ;
                nums[i] = nums[j] ;
            }
        }
        return i+1 ;
    }
};