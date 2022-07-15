// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int countRev (string s);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        cout << countRev (s) << '\n';
    }
}

// Contributed By: Pranay Bansal// } Driver Code Ends



int countRev (string s)
{
    // your code here
    int len=s.size();
    if(len%2!=0){
        return -1;
    }
    stack<char> st;
    for(int i=0;i<len;i++){
        if(s[i]=='}' && !st.empty()){
            if(st.top()=='{')
               st.pop();
            else
               st.push(s[i]);
        }
        else
           st.push(s[i]);
    }
    int curr=st.size();
    int count=0;
    while(!st.empty() && st.top()=='{'){
        st.pop();
        count++;
    }
    return (curr/2 + count%2);
}