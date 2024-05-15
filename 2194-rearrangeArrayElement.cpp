class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int i = 0 ;
        int j = 0 ;
        int len = nums.size() ;
        vector<int> ans(len,0);

        int pos = 0 , neg = 1 ;
        for( int i = 0 ; i < len ; i++){

            if(nums[i] > 0 ){
                ans[pos] = nums[i] ;
                pos += 2 ;
            }else{
                ans[neg] = nums[i] ;
                neg += 2 ; 
            }

        }

        // while( i < len && j < len ){
        //     while(i < len && nums[i] < 0 ) {
        //         i++ ;
        //     }
        //     while( j < len && nums[j] > 0 ) {
        //         j++ ;
        //     }
        //     ans.push_back(nums[i]) ;
        //     ans.push_back(nums[j]) ;
        //     i++ ; 
        //     j++ ;
        // }

        // while( j < len && nums[j] < 0 )
        // {
        //     ans.push_back(nums[j]) ;
        //     j++ ;
        // }

        return ans ;
    }
};