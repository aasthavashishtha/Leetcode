#include <string>
using namespace std;

class Solution {
public:
    bool is_vowel(char ch){
        if( ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' )
            return true;
        else 
            return false;
    }

    string reverseVowels(string s) {
        int len = s.length();
        int i = 0;
        int j = len - 1;
        while( i < j ){
            while( i < j && !is_vowel(s[i]) ){
                i++;
            }
            while( i < j && !is_vowel(s[j]) ){
                j--;
            }

            char ch = s[i];
            s[i] = s[j];
            s[j] = ch;
            i++;
            j--;
        }
        return s;
    }
};
