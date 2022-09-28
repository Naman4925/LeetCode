class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxx=0;
        int right=0,left=0;
        unordered_map<char,int>mp;
        while(right<s.size()){
            if(mp[s[right]]==0){
                mp[s[right]]++;
                right++;
            }
            else{
                mp[s[left]]=0;
                left++;
            }
            maxx=max(maxx,right-left);
        }
        return maxx;
    }
};