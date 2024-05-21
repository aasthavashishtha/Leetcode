class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int len = nums.size() ;
        vector<int> v(len+1 , 0);
        for(int i = 0 ; i < len ; i++){
            v[nums[i]]++ ;
        }
        vector<int> ans(2,-1) ;
        for( int i = 1  ; i < len+1 ; i++){
            if(v[i] == 2)
                ans[0] = i ;
            if(v[i] == 0)
                ans[1] = i ;
        }
        return ans ;
    }
};