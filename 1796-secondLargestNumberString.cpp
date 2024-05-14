#include <vector>
#include <algorithm>

class Solution {
public:
    int secondHighest(string s) {
        vector<int> v ;
        for(int i = 0 ; i < s.length() ; i++){
            if(s[i] >= '0' && s[i] <= '9' ){
                int num = s[i] - '0' ;
                v.push_back(num) ;
            }
        }
        int i = v.size() ;
        if( i==0 || i == 1 )
            return -1;

        sort(v.begin(), v.end());
        
        int maxVal = v[i-1] ;
        i--;

        while( i >= 0 && v[i] == maxVal) {
            i-- ;
        } 

        if( i < 0 )
            return -1;
        return v[i] ;
    }
};
