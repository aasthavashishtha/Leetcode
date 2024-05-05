class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans ;
        int len = candies.size() ;
        for( int i = 0 ; i < len ; i++){
            int max = candies[i] + extraCandies ;
            int index = i ;
            for ( int j = 0 ; j < len ; j++){
                if( max < candies[j]){
                    index = j ;
                    break ;
                }
            }
            if( i == index )
                ans.push_back(true) ;
            else 
                ans.push_back(false) ;
        }
        return ans ;
    }
};