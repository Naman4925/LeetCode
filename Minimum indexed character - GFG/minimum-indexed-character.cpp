// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    //Function to find the minimum indexed character.
    
    /*int minIndexChar(string str, string patt)
    {
        // Your code here
        int minI=INT_MAX;
        for(int i=0;i<patt.size();i++){
            for(int j=0;j<str.size();j++){
                if(patt[i]==str[j] && j<minI){
                   minI=j;
                   break;
                }
            }
        }
        if(minI!=INT_MAX)
           return minI;
        return -1;
    }*/
    int minIndexChar(string str, string patt)
    {
        unordered_set<char>s;
        for(int i=0;i<patt.size();i++){
            s.insert(patt[i]);
        }
        for(int i=0;i<str.size();i++){
            if(s.find(str[i])!=s.end())
               return i;
        }
        return -1;
    }
};

// { Driver Code Starts.

int main()
{
	int t;
    cin>>t;
    while(t--)
    {
        string str;
        string patt;
        cin>>str;
        cin>>patt;
        Solution obj;
        cout<<obj.minIndexChar(str, patt)<<endl;
    }
	return 0;
}
  // } Driver Code Ends