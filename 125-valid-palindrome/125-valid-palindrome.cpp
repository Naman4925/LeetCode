/*class Solution {
public:
    bool isPalindrome(string s) {
        string first="";
        string second="";
        for(int i=0;i<s.size();i++){
            if(s[i]>='A' && s[i]<='Z' || s[i]>='a' && s[i]<='z' || s[i]>='0' && s[i]<='9')
            {
                first=first+(char)tolower(s[i]);
            }
        }
        for(int i=first.length()-1;i>=0;i--){
            second=second+first[i];
        }
        return second==first;
    }
};*/



class Solution {
public:
    bool isPalindrome(string s) {
        string firstTemp = "";
        string secondTemp = "";
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] >= 'A' && s[i] <='Z'|| s[i] >= '0' && s[i] <= '9'|| s[i] >= 'a' && s[i] <= 'z')
            {
                firstTemp += (char)tolower(s[i]);
            }
        }
        for (int i = firstTemp.length()-1; i >= 0; i--)
        {
            secondTemp += firstTemp[i];
        }
        return secondTemp==firstTemp;
    }
};