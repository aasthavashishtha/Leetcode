class Solution {
public:
    int hammingWeight(int n) {
        string binary = "" ;
        while(n != 1 && n != 0){
            char ch = '0' + (n%2) ;
            binary = ch + binary ;
            n = n / 2 ;
        }
        char ch = '0' + (n%2) ;
            binary = ch + binary ;
        int count = 0 ;
        for( int i = 0 ; i < binary.length() ; i++){
            if( binary[i] == '1')
                count ++ ;
        }
        return count ;
    }

};