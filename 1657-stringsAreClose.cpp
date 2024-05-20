class Solution {
public:
    bool closeStrings(string word1, string word2) {
        int len1 = word1.length() ;
        int len2 = word2.length() ;

        if(len1 != len2)
            return false ;
        
        vector<int> freq1(26,0) ;
        vector<int> freq2(26,0) ;
        for( int i = 0 ; i< len1 ; i++){
            freq1[word1[i]-'a']++;
            freq2[word2[i]-'a']++;
        }
        for(int i = 0 ; i < 26 ; i++){
            if((freq1[i] !=0 && freq2[i]!= 0) || (freq1[i] == 0 && freq2[i] == 0))
                continue;
            else 
                return false ;
        }
        // for(int i = 0 ; i < 26 ; i++){
        //     for(int j = 0 ; j < 26 ; j++){
        //         if(freq1[i] == freq2[j]){
        //             freq1[i] = freq2[j] = 0;
        //             break ;
        //         }
        //     }
        // }
        // for(int i = 0 ; i < 26 ; i++){
        //     if(freq1[i] !=0 || freq2[i]!= 0)
        //         return false ;
        // }

        sort(freq1.begin() , freq1.end()) ;
        sort(freq2.begin() , freq2.end()) ;
        for(int i = 0 ; i < 26 ; i++){
            if(freq1[i] != freq2[i])
                return false ;
        }
        return true ;
    }
};