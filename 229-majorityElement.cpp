//Boyer's moore majority voting algo (n/2) , (n/3)
class Solution {
public:
    bool not_already ( vector<int> ans , int num ){
        int len = ans.size() ;
        for(int i = 0 ; i < len ; i++ ){
            if(num == ans[i])
                return false ;
        }
        return true ;
    }

    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans ;
        int len = nums.size() ;
        int count = 1 ;
        for(int i = 0 ; i < len ; i++ ){
            count = 1 ;
            for(int j = i+1 ; j < len ; j++ ){
                if(nums[i] == nums[j])
                    count++ ;
                
            }
            if( count > len/3 && not_already( ans , nums[i])){
                        ans.push_back(nums[i]) ;
            }
        }
        return ans ;
    }
};