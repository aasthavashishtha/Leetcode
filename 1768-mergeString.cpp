class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int len1 = word1.length() ;
        int len2 = word2.length() ;
        string ans = "" ;
        int i = 0 , j = 0 ;

        while( i < len1 && j < len2){
            ans = ans + word1[i] + word2[j];
            i++ ;
            j++ ;
        }
        while( i < len1 ){
            ans = ans + word1[i] ;
            i++ ;
        }
        while( j < len2 ){
            ans = ans + word2[j] ;
            j++ ;
        }
        return ans ;
    }
};