class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length() != t.length())
            return false ;
        vector<int> freq1(256 , 0) ;
        vector<int> freq2(256 , 0) ;

        for(int i= 0 ; i < s.length() ; i++){
            if(freq1[s[i]] == 0 && freq2[t[i]]==0 ){
                freq1[s[i]] = t[i] ;
                freq2[t[i]] = s[i] ;
            }
            else if(freq1[s[i]] != t[i] || freq2[t[i]] != s[i] )
                return false ;
        }
        
        // for(int i= 0 ; i < s.length()-1 ; i++){
        //     for(int j= i+1 ; j < s.length() ; j++){
        //         if(s[i]==s[j] && t[i]!= t[j] || t[i]==t[j] && s[i]!=s[j]){
        //                 return false ;
        //         }
        //     }
        // }
        return true ;
    }
};