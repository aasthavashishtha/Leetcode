class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int  len = nums.size() ;
        int v[len] ;

        for(int i = 0 ; i < len ; i++){

            int index = ( i + k ) % len;
            v[index] = nums[i] ;

        }

        for(int i =0 ; i < len ; i++) {
            nums[i] = v[i] ;
        }
    }
};