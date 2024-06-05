class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<string> result ;
        if(words.empty())
            return result;

        vector<int> minfreq(26, INT_MAX);

        for(auto &word : words){
            vector<int> freq(26,0) ;
            for( auto ch : word){
                freq[ch - 'a']++;
            }
            for(int i = 0 ; i<26 ; i++){
                minfreq[i] = min(minfreq[i] , freq[i]);
            }
        }
        for(int i = 0 ; i <26 ;i++){
            while(minfreq[i] > 0){
                result.push_back(string(1 , (i+'a'))) ;
                minfreq[i]--;
            }
        }
        return result;
    }
};