class Solution {
public:
    int addedInteger(vector<int>& nums1, vector<int>& nums2) {
        int sum1 = 0 , sum2 = 0 ;
        int len = nums1.size() ;
        for( int i = 0 ; i < len ; i++ ){
            sum1 += nums1[i] ;
            sum2 += nums2[i] ;
        }
        int integer = 0 ; 
        integer = (sum2 - sum1) / len ;
        return integer ;
    }
};