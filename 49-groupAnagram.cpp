#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map>

class Solution {
public:
    vector<vector<string>>  groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> anagramGroups;

        for (const auto& str : strs) {
            string sortedStr = str;
            sort(sortedStr.begin(), sortedStr.end());
            anagramGroups[sortedStr].push_back(str);
        }

        for (const auto& pair : anagramGroups) {
            ans.push_back(pair.second);
        }

        return ans;
    }
};



// class Solution {
// public:
//     vector<vector<string>> groupAnagrams(vector<string>& strs) {
//         vector<vector<string>> ans;
//         vector<string> dupe;
//         int len=strs.size();
//         int freq[len];
//         for(int i=0;i<len;i++)
//         {
//             string st=strs[i];
//             sort(st.begin(),st.end());
//             dupe.push_back(st);
//         }
//         int max=-1;
//         for(int i=0;i<len;i++)
//         {
//             for(int j=0;j<len;j++)
//             {
//                 if(dupe[i]==dupe[j])
//                     freq[i]++;
//                 if(max<freq[i])
//                     max=freq[i];
//             }
//         }
//         for(int i=0;i<max;i++)
//         {
//             for(int j=0;j<len;j++)
//             {
//                 if(freq[j]==i)
//                 {
//                     ans.push_back(strs[j]);
//                 }
//             }
//         }
//         return ans;
//     }
// };