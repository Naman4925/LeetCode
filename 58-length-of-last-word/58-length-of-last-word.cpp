class Solution {
public:
   int lengthOfLastWord(string s) {
        int i=s.length()-1,ans=0;
	   // ignoring  space present after last word
        while(i>=0 && s[i]==' '){
            i--;
        }
		// count length of last word
        while( i>=0 && s[i]!=' '){
            i--;
            ans++;
        }
        return ans;
    }
};
