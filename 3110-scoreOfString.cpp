class Solution {
public:
    int scoreOfString(string s) {
        int score = 0 ;
        for( int i = 0 ; i < s.length()-1 ; i++){
            int diff = ( (s[i]-s[i+1]) >= 0) ? (s[i]-s[i+1]) : (s[i+1]-s[i]) ;
            score +=  diff;
        }
        return score ;
    }
};