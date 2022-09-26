class Solution {
public:
    string reverseWords(string s) {
        stack<string> st;
        string ans,val;
        for(int i=0;i<s.size();i++){
            if(s[i]>='A' && s[i]<='Z' || s[i]>='a' && s[i]<='z' || s[i]>='0' && s[i]<='9'){
                val+=s[i];
            }
                else if(s[i]==' '){
                    if(val.size()!=0){
                        st.push(val);
                        val.clear();
                    }
                }
        }
            if(val.size()>0){
                st.push(val);
            }
            while(!st.empty()){
                ans+=st.top();
                ans+=' ';
                st.pop();
            }
        
        ans.pop_back();
        return ans;
    }
};