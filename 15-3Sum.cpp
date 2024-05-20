class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> s;
        vector<vector<int>> v ;
        sort(nums.begin(), nums.end()) ;
        int len = nums.size() ;
        int target = 0 ;
        for(int i = 0 ; i < len ; i++){
            int j = i+1 ;
            int k = len-1 ;
            while( j < k ){
                int sum = nums[i] + nums[k] + nums[j] ;
                if(sum==target){
                    s.insert({nums[i],nums[j],nums[k]}) ;
                    j++ ;
                    k-- ;
                }
                else if( sum < target)
                    j++ ;
                else 
                    k-- ;
            }
        }
        for(auto triplet : s){
            v.push_back(triplet) ;
        }
        return v ;
    }
};

