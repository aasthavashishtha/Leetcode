class Solution {
public:
    int numberOfSpecialChars(string word) {
        int count = 0 ;
        int len = word.length() ;
        int upper[26] ;
        int lower[26] ;
        for( int i = 0 ; i < 26 ; i++){
            lower[i] = upper[i] = 0 ;
        }
        for( int i = 0 ; i < len ; i++){
            if( word[i] >= 'a' && word[i] <='z'){
                int index = word[i] - 'a' ;
                lower[index] = 1 ;
            }
            else if( word[i] >= 'A' && word[i] <='Z'){
                int index = word[i] - 'A' ;
                upper[index] = 1 ;
            }
        }
        for( int i = 0 ; i < 26 ; i++){
            if( lower[i] == 1 && upper[i] == 1 )
                count++;
        }
        return count ;
    }
};