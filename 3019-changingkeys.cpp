#include<bits/stdc++.h>
using namespace std;

    int countKeyChanges(string s) {
        int len = s.length() ;
        int ans = 0 ;
        string str = s ;
        transform(str.begin(), str.end(), str.begin(), ::toupper);
        cout << str ;
        if(len == 1 ) 
            return ans ;

        if( len == 2 ){
            if( s[0] != s[1])
                return ans+1 ;
            return ans ;
        }
        
        for(int i = 0 ; i < len-1 ; i++ ){
            if( s[i] != s[i+1] )
                ans++ ; 
        }

        return ans ;
    }
int main(){
    string s = "aAbBcC" ;
    cout << countKeyChanges(s) ;
}