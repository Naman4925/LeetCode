class Solution {
public:
    bool isSubsequence(string s, string t) {
        string str;
        int k=0;
        for(int i=0;i<t.size();i++){
            if(s[k]==t[i]){
                str+=s[k];
                k++;
            }
            else{
                continue;
            }
        }
        // for(int i=0;i<str.size();i++){
        //     cout<<str[i];
        // }
        if(str==s)
           return true;
        return false;
    }
};