class Solution {
public:
    int strStr(string haystack, string needle) {
      return haystack.find(needle);
//         int n=haystack.length();
//         for(int i=0;i<=n;i++){
//             if(haystack[i] == needle[0]){
//                 if(needle.length() == 1){
//                     return i;
//                 }
//                 for(int j=1;j<needle.length();j++){
//                     if(haystack[i+j]!=needle[j]){
//                         break;
//                     }
//                     if(j==needle.length()-1){
//                         return i;
//                     }
//                 }
                
//             }
//         }
//         return -1;
    }
};