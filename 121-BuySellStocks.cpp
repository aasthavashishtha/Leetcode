class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int len = prices.size() ;
        int profit = 0 ;
        if(len ==1 )
            return profit ;
        // for( int i = 0 ; i < len ; i++ ){
        //     for( int j = i+1 ; j < len ; j++){       //Brute force
        //         if((prices[j]-prices[i]) > ans )
        //             ans = prices[j]-prices[i] ;
        //     }
        // }
        
        int min = INT_MAX ;
        
        //int ans[len] ;
        //ans[0] = min ;
        // for( int i = 1 ; i < len ; i++ ){
        //     if( prices[i-1] < min )          //Better
        //         min = prices[i-1] ;
        //     ans[i] = min ;
        // }
        // for( int i = 0 ; i < len ; i++){
        //     if((prices[i]-ans[i]) > profit)
        //         profit = prices[i]-ans[i] ;
        // }
        
        for( int i = 1 ; i < len ; i++ ){
            if( prices[i-1] < min )          // optimised
                min = prices[i-1] ;
            int faida = prices[i] - min ;
            if( profit < faida)
                profit = faida ;
        }

        return profit ;
    }
};