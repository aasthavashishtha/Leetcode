class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int len = digits.size() ;
        vector<int> ans(len) ;
        for( int i = 0 ; i < len ; i++){
            ans[i] = digits[i] ;
        }
        int i = len-1 ;
        int rem = 1 ;
        while(rem != 0 && i >= 0){
           int dig = ans[i] + rem ;
           if(dig > 9){
                rem = 1 ;
                ans[i] = dig % 10;
           } 
           else{
                rem = 0 ;
                ans[i] = dig ;
           }
            i-- ;
        }
    
        if( rem == 1 ){
            ans.insert(ans.begin() , 1) ;
        }
        return ans ;
    }
};


//         int num = 0 ;
//         int len = digits.size() ;
//         for( int i = 0 ; i < len ; i++){
//             num = num*10 + digits[i] ;
//         }
//         num += 1 ;
//         vector<int> ans ;
//         while( num > 0){
//             int dig = num % 10 ;
//             ans.insert(ans.begin(),dig) ;
//             num = num / 10 ;
//         }
//         return ans ;