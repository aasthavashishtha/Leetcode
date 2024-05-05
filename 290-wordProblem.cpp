class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> str ;
        int lens = s.length() ;
        string word = "" ;
        for( int i = 0 ; i <=  lens ; i++ ){

            if( i==lens || s[i] == ' '){
                str.push_back(word);
                word = "" ;
            }
            else{
                word = word + s[i] ;
            }
        }
        int lenp = pattern.length() ;
        int lenstr = str.size() ;
        if( lenp != lenstr)
            return false ;
        for ( int i = 0 ; i < lenp-1 ; i++ ){
            for( int j = i+1 ; j < lenp ; j++ ){
                if ((pattern[i] == pattern[j] && str[i] != str[j]) || (str[i] == str[j] && pattern[i] != pattern[j])) {
                    return false;
                }

            }
        }
        
        return true ;
    }
};